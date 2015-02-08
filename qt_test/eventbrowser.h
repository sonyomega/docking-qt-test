#ifndef EVENTBROWSER_H
#define EVENTBROWSER_H

#include <QMainWindow>

namespace Ui {
class EventBrowser;
}

class EventBrowser : public QMainWindow
{
    Q_OBJECT

public:
    explicit EventBrowser(QWidget *parent = 0);
    ~EventBrowser();
		
		void addDockThingy(const QDockWidget *dock);

private slots:
		void dragStarted(bool started);
		void enterEvent(QEvent* event);
		bool event(QEvent* event);
		void mouseReleaseEvent(QMouseEvent *event);
		void dragEnded();

private:
    Ui::EventBrowser *ui;
};

#endif // EVENTBROWSER_H
