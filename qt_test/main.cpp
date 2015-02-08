#include "mainwindow.h"
#include "eventbrowser.h"
#include <QApplication>
#include <QResource>
#include <QDockWidget>
#include <QImage>

QDockWidget *Encapsulate(MainWindow *parent, QMainWindow *widg, QString title)
{
	QDockWidget *ret = new QDockWidget(parent);

	widg->setWindowTitle(title);
	ret->setWindowTitle(title);
	ret->setWidget(widg);

	parent->addDockThingy(ret);

	return ret;
}

EventBrowser *origTex;
QDockWidget *pipe;
MainWindow *mainw;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

		w.setWindowTitle("MainWindow");

		mainw = &w;
		origTex = new EventBrowser;

		auto tex = Encapsulate(&w, origTex, "tex");
		pipe = Encapsulate(&w, new EventBrowser, "pipe");
		auto mesh = Encapsulate(&w, new EventBrowser, "mesh");
		auto timeline = Encapsulate(&w, new EventBrowser, "timeline");
		auto evbr = Encapsulate(&w, new EventBrowser, "evbr");
		auto api = Encapsulate(&w, new EventBrowser, "api");

		origTex->addDockThingy(pipe);
		origTex->addDockThingy(mesh);
		origTex->addDockThingy(timeline);
		origTex->addDockThingy(evbr);
		origTex->addDockThingy(api);

		w.addDockWidget(Qt::BottomDockWidgetArea, timeline);
		w.splitDockWidget(timeline, evbr, Qt::Vertical);
		w.splitDockWidget(evbr, tex, Qt::Horizontal);
		w.splitDockWidget(evbr, api, Qt::Vertical);
		w.tabifyDockWidget(tex, pipe);
		w.tabifyDockWidget(tex, mesh);

    return a.exec();
}
