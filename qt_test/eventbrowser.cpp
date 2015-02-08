#include <QDockWidget>

#include "eventbrowser.h"
#include "ui_eventbrowser.h"

#include <Windows.h>

EventBrowser::EventBrowser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EventBrowser)
{
    ui->setupUi(this);
}

EventBrowser::~EventBrowser()
{
    delete ui;
}

extern QDockWidget* dw;

void EventBrowser::addDockThingy(const QDockWidget *dock)
{
	connect(dock, SIGNAL(topLevelChanged(bool)), this, SLOT(dragStarted(bool)));
	connect(dock, SIGNAL(dockLocationChanged(Qt::DockWidgetArea)), this, SLOT(dragEnded()));
}

void EventBrowser::dragStarted(bool started)
{
	if(started)
	{
		if(QDockWidget* dock = qobject_cast<QDockWidget*>(sender()))
		{
			OutputDebugStringA("EventBrowser::dragStarted: '");
			OutputDebugStringA(dock->windowTitle().toStdString().c_str());
			OutputDebugStringA("'\n");
			dw = dock;
		}
		else
		{
			OutputDebugStringA("EventBrowser::dragStarted: NULL!\n");
			dw = NULL;
		}
	}
}

void EventBrowser::mouseReleaseEvent(QMouseEvent *event)
{
	(void)event;
			
	OutputDebugStringA("EventBrowser::mouseReleaseEvent\n");
	dw = NULL;
}

void EventBrowser::enterEvent(QEvent* event)
{
	(void)event;
			
	OutputDebugStringA("EventBrowser::enterEvent: '");
	OutputDebugStringA(this->windowTitle().toStdString().c_str());
	OutputDebugStringA("'\n");

	if(dw)
	{
		OutputDebugStringA("   dw non-NULL '");
		OutputDebugStringA(((QWidget *)dw->parent())->windowTitle().toStdString().c_str());
		OutputDebugStringA("'\n");

		if(dw->parent() != this)
		{
            dw->setParent(this);
            addDockWidget(Qt::RightDockWidgetArea, dw);
            dw = NULL;
		}
	}
}

bool EventBrowser::event(QEvent* event)
{
	(void)event;
	return false;
	OutputDebugStringA("EventBrowser::event\n");
	QEvent::Type t = event->type();
	switch(t)
	{
#define CASE_OUTPUT(a) case QEvent::a: OutputDebugStringA("  = ");OutputDebugStringA(#a); OutputDebugStringA("\n"); break;
		CASE_OUTPUT(None)
CASE_OUTPUT(Timer)
CASE_OUTPUT(MouseButtonPress)
CASE_OUTPUT(MouseButtonRelease)
CASE_OUTPUT(MouseButtonDblClick)
CASE_OUTPUT(MouseMove)
CASE_OUTPUT(KeyPress)
CASE_OUTPUT(KeyRelease)
CASE_OUTPUT(FocusIn)
CASE_OUTPUT(FocusOut)
CASE_OUTPUT(FocusAboutToChange)
CASE_OUTPUT(Enter)
CASE_OUTPUT(Leave)
CASE_OUTPUT(Paint)
CASE_OUTPUT(Move)
CASE_OUTPUT(Resize)
CASE_OUTPUT(Create)
CASE_OUTPUT(Destroy)
CASE_OUTPUT(Show)
CASE_OUTPUT(Hide)
CASE_OUTPUT(Close)
CASE_OUTPUT(Quit)
CASE_OUTPUT(ParentChange)
CASE_OUTPUT(ParentAboutToChange)
CASE_OUTPUT(ThreadChange)
CASE_OUTPUT(WindowActivate)
CASE_OUTPUT(WindowDeactivate)
CASE_OUTPUT(ShowToParent)
CASE_OUTPUT(HideToParent)
CASE_OUTPUT(Wheel)
CASE_OUTPUT(WindowTitleChange)
CASE_OUTPUT(WindowIconChange)
CASE_OUTPUT(ApplicationWindowIconChange)
CASE_OUTPUT(ApplicationFontChange)
CASE_OUTPUT(ApplicationLayoutDirectionChange)
CASE_OUTPUT(ApplicationPaletteChange)
CASE_OUTPUT(PaletteChange)
CASE_OUTPUT(Clipboard)
CASE_OUTPUT(Speech)
CASE_OUTPUT(MetaCall)
CASE_OUTPUT(SockAct)
CASE_OUTPUT(WinEventAct)
CASE_OUTPUT(DeferredDelete)
CASE_OUTPUT(DragEnter)
CASE_OUTPUT(DragMove)
CASE_OUTPUT(DragLeave)
CASE_OUTPUT(Drop)
CASE_OUTPUT(DragResponse)
CASE_OUTPUT(ChildAdded)
CASE_OUTPUT(ChildPolished)
CASE_OUTPUT(ChildRemoved)
CASE_OUTPUT(ShowWindowRequest)
CASE_OUTPUT(PolishRequest)
CASE_OUTPUT(Polish)
CASE_OUTPUT(LayoutRequest)
CASE_OUTPUT(UpdateRequest)
CASE_OUTPUT(UpdateLater)
CASE_OUTPUT(EmbeddingControl)
CASE_OUTPUT(ActivateControl)
CASE_OUTPUT(DeactivateControl)
CASE_OUTPUT(ContextMenu)
CASE_OUTPUT(InputMethod)
CASE_OUTPUT(TabletMove)
CASE_OUTPUT(LocaleChange)
CASE_OUTPUT(LanguageChange)
CASE_OUTPUT(LayoutDirectionChange)
CASE_OUTPUT(Style)
CASE_OUTPUT(TabletPress)
CASE_OUTPUT(TabletRelease)
CASE_OUTPUT(OkRequest)
CASE_OUTPUT(HelpRequest)
CASE_OUTPUT(IconDrag)
CASE_OUTPUT(FontChange)
CASE_OUTPUT(EnabledChange)
CASE_OUTPUT(ActivationChange)
CASE_OUTPUT(StyleChange)
CASE_OUTPUT(IconTextChange)
CASE_OUTPUT(ModifiedChange)
CASE_OUTPUT(MouseTrackingChange)
CASE_OUTPUT(WindowBlocked)
CASE_OUTPUT(WindowUnblocked)
CASE_OUTPUT(WindowStateChange)
CASE_OUTPUT(ToolTip)
CASE_OUTPUT(WhatsThis)
CASE_OUTPUT(StatusTip)
CASE_OUTPUT(ActionChanged)
CASE_OUTPUT(ActionAdded)
CASE_OUTPUT(ActionRemoved)
CASE_OUTPUT(FileOpen)
CASE_OUTPUT(Shortcut)
CASE_OUTPUT(ShortcutOverride)
CASE_OUTPUT(WhatsThisClicked)
CASE_OUTPUT(ToolBarChange)
CASE_OUTPUT(ApplicationActivate)
CASE_OUTPUT(ApplicationDeactivate)
CASE_OUTPUT(QueryWhatsThis)
CASE_OUTPUT(EnterWhatsThisMode)
CASE_OUTPUT(LeaveWhatsThisMode)
CASE_OUTPUT(ZOrderChange)
CASE_OUTPUT(HoverEnter)
CASE_OUTPUT(HoverLeave)
CASE_OUTPUT(HoverMove)
CASE_OUTPUT(AcceptDropsChange)
CASE_OUTPUT(ZeroTimerEvent)
CASE_OUTPUT(GraphicsSceneMouseMove)
CASE_OUTPUT(GraphicsSceneMousePress)
CASE_OUTPUT(GraphicsSceneMouseRelease)
CASE_OUTPUT(GraphicsSceneMouseDoubleClick)
CASE_OUTPUT(GraphicsSceneContextMenu)
CASE_OUTPUT(GraphicsSceneHoverEnter)
CASE_OUTPUT(GraphicsSceneHoverMove)
CASE_OUTPUT(GraphicsSceneHoverLeave)
CASE_OUTPUT(GraphicsSceneHelp)
CASE_OUTPUT(GraphicsSceneDragEnter)
CASE_OUTPUT(GraphicsSceneDragMove)
CASE_OUTPUT(GraphicsSceneDragLeave)
CASE_OUTPUT(GraphicsSceneDrop)
CASE_OUTPUT(GraphicsSceneWheel)
CASE_OUTPUT(KeyboardLayoutChange)
CASE_OUTPUT(DynamicPropertyChange)
CASE_OUTPUT(TabletEnterProximity)
CASE_OUTPUT(TabletLeaveProximity)
CASE_OUTPUT(NonClientAreaMouseMove)
CASE_OUTPUT(NonClientAreaMouseButtonPress)
CASE_OUTPUT(NonClientAreaMouseButtonRelease)
CASE_OUTPUT(NonClientAreaMouseButtonDblClick)
CASE_OUTPUT(MacSizeChange)
CASE_OUTPUT(ContentsRectChange)
CASE_OUTPUT(MacGLWindowChange)
CASE_OUTPUT(FutureCallOut)
CASE_OUTPUT(GraphicsSceneResize )
CASE_OUTPUT(GraphicsSceneMove )
CASE_OUTPUT(CursorChange)
CASE_OUTPUT(ToolTipChange)
CASE_OUTPUT(NetworkReplyUpdated)
CASE_OUTPUT(GrabMouse)
CASE_OUTPUT(UngrabMouse)
CASE_OUTPUT(GrabKeyboard)
CASE_OUTPUT(UngrabKeyboard)
CASE_OUTPUT(MacGLClearDrawable)
CASE_OUTPUT(StateMachineSignal)
CASE_OUTPUT(StateMachineWrapped)
CASE_OUTPUT(TouchBegin)
CASE_OUTPUT(TouchUpdate)
CASE_OUTPUT(TouchEnd)
CASE_OUTPUT(NativeGesture)
CASE_OUTPUT(RequestSoftwareInputPanel)
CASE_OUTPUT(CloseSoftwareInputPanel)
CASE_OUTPUT(WinIdChange)
CASE_OUTPUT(Gesture)
CASE_OUTPUT(GestureOverride)
CASE_OUTPUT(ScrollPrepare)
CASE_OUTPUT(Scroll)
CASE_OUTPUT(Expose)
CASE_OUTPUT(InputMethodQuery)
CASE_OUTPUT(OrientationChange)
CASE_OUTPUT(TouchCancel)
CASE_OUTPUT(ThemeChange)
CASE_OUTPUT(SockClose)
CASE_OUTPUT(PlatformPanel)
CASE_OUTPUT(StyleAnimationUpdate)
CASE_OUTPUT(ApplicationStateChange)
CASE_OUTPUT(User)
CASE_OUTPUT(MaxUser)
	default:
		OutputDebugStringA("  = unknown\n");
	}
	return false;
}

void EventBrowser::dragEnded()
{
	OutputDebugStringA("EventBrowser::dragEnded\n");
	dw = NULL;
}
