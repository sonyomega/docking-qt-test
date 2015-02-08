#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class GlobalFilter : public QObject
{
	Q_OBJECT;

public:
	GlobalFilter() : QObject(NULL) {}
	~GlobalFilter() {}

	bool eventFilter(QObject *obj, QEvent *ev);
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

		void addDockThingy(const QDockWidget *dock);

private slots:
    void on_actionView_Documentation_triggered();

    void on_actionDeveloper_Forums_triggered();

    void on_actionSource_on_github_triggered();

    void on_action_Exit_triggered();

		void dragStarted(bool started);
		void enterEvent(QEvent* event);
		void mouseReleaseEvent(QMouseEvent *event);
		void dragEnded();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
