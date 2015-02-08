#include <QDesktopServices>
#include <QUrl>
#include <QDebug>
#include <QDockWidget>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "eventbrowser.h"

#include <Windows.h>

QDockWidget* dw = NULL;

extern EventBrowser *origTex;
extern QDockWidget *pipe;
extern MainWindow *mainw;

bool GlobalFilter::eventFilter(QObject *obj, QEvent *ev)
{
	(void)obj;
	if(ev->type() == QEvent::MouseButtonRelease)
	{
		OutputDebugStringA("GlobalFilter::eventFilter::MouseButtonRelease\n");
		dw = NULL;
	}
	if(((QWidget *)obj)->parent() == NULL && ev->type() == QEvent::KeyPress)
	{
		OutputDebugStringA("GlobalFilter::eventFilter::KeyPress\n");

		if(pipe->parent() == mainw)
		{
			OutputDebugStringA("parent() == main\n");
			origTex->addDockWidget(Qt::RightDockWidgetArea, pipe);
            pipe->setParent(origTex);
		}
		else if(pipe->parent() == origTex)
		{
			OutputDebugStringA("parent() == origTex\n");
			mainw->addDockWidget(Qt::RightDockWidgetArea, pipe);
            pipe->setParent(mainw);
		}
	}

	return false;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

		setCentralWidget(NULL);
		setTabPosition(Qt::DockWidgetArea_Mask, QTabWidget::North);

		qApp->installEventFilter(new GlobalFilter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionView_Documentation_triggered()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("renderdoc.chm"));
}

void MainWindow::on_actionDeveloper_Forums_triggered()
{
    QDesktopServices::openUrl(QUrl::fromUserInput("http://crydev.net/renderdoc"));
}

void MainWindow::on_actionSource_on_github_triggered()
{
    QDesktopServices::openUrl(QUrl::fromUserInput("https://github.com/baldurk/renderdoc"));
}

void MainWindow::on_action_Exit_triggered()
{
    qApp->exit();
}

void MainWindow::addDockThingy(const QDockWidget *dock)
{
	connect(dock, SIGNAL(topLevelChanged(bool)), this, SLOT(dragStarted(bool)));
	connect(dock, SIGNAL(dockLocationChanged(Qt::DockWidgetArea)), this, SLOT(dragEnded()));
}

void MainWindow::dragStarted(bool started)
{
	if(started)
	{
		if(QDockWidget* dock = qobject_cast<QDockWidget*>(sender()))
		{
			OutputDebugStringA("MainWindow::dragStarted: '");
			OutputDebugStringA(dock->windowTitle().toStdString().c_str());
			OutputDebugStringA("'\n");
			dw = dock;
		}
		else
		{
			OutputDebugStringA("MainWindow::dragStarted: NULL!\n");
			dw = NULL;
		}
	}
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
	(void)event;
			
	OutputDebugStringA("MainWindow::mouseReleaseEvent\n");
	dw = NULL;
}

void MainWindow::enterEvent(QEvent* event)
{
	(void)event;
			
	OutputDebugStringA("MainWindow::enterEvent: '");
	OutputDebugStringA(this->windowTitle().toStdString().c_str());
	OutputDebugStringA("'\n");

	if(dw)
	{
		OutputDebugStringA("   dw non-NULL '");
		OutputDebugStringA(((QWidget *)dw->parent())->windowTitle().toStdString().c_str());
		OutputDebugStringA("'\n");

		if(dw->parent() != this)
		{
			//dw->setParent(this);
			//addDockWidget(Qt::RightDockWidgetArea, dw);
			//dw = NULL;
		}
	}
}

void MainWindow::dragEnded()
{
	OutputDebugStringA("MainWindow::dragEnded\n");
	dw = NULL;
}
