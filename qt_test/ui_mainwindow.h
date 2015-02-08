/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionView_Diagnostic_Log_File;
    QAction *actionUpdate;
    QAction *actionSource_on_github;
    QAction *actionDeveloper_Forums;
    QAction *action_About;
    QAction *actionView_Documentation;
    QAction *action_Resolve_Symbols;
    QAction *action_Log_Statistics;
    QAction *action_Options;
    QAction *action_Event_Viewer;
    QAction *action_Texture_Viewer;
    QAction *action_Pipeline_State;
    QAction *action_Capture_Log;
    QAction *action_Attach_to_Running_Instance;
    QAction *action_Open_Log;
    QAction *action_Exit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuWindow;
    QMenu *menuTools;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(736, 528);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow::separator {\n"
"		background: rgb(80, 80, 80);\n"
"		width: 1px;\n"
"		height: 1px;\n"
"	}"));
        MainWindow->setIconSize(QSize(128, 128));
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks);
        actionView_Diagnostic_Log_File = new QAction(MainWindow);
        actionView_Diagnostic_Log_File->setObjectName(QStringLiteral("actionView_Diagnostic_Log_File"));
        actionUpdate = new QAction(MainWindow);
        actionUpdate->setObjectName(QStringLiteral("actionUpdate"));
        actionUpdate->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/hourglass.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpdate->setIcon(icon1);
        actionUpdate->setVisible(true);
        actionSource_on_github = new QAction(MainWindow);
        actionSource_on_github->setObjectName(QStringLiteral("actionSource_on_github"));
        actionDeveloper_Forums = new QAction(MainWindow);
        actionDeveloper_Forums->setObjectName(QStringLiteral("actionDeveloper_Forums"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        action_About->setMenuRole(QAction::AboutRole);
        actionView_Documentation = new QAction(MainWindow);
        actionView_Documentation->setObjectName(QStringLiteral("actionView_Documentation"));
        action_Resolve_Symbols = new QAction(MainWindow);
        action_Resolve_Symbols->setObjectName(QStringLiteral("action_Resolve_Symbols"));
        action_Log_Statistics = new QAction(MainWindow);
        action_Log_Statistics->setObjectName(QStringLiteral("action_Log_Statistics"));
        action_Options = new QAction(MainWindow);
        action_Options->setObjectName(QStringLiteral("action_Options"));
        action_Event_Viewer = new QAction(MainWindow);
        action_Event_Viewer->setObjectName(QStringLiteral("action_Event_Viewer"));
        action_Texture_Viewer = new QAction(MainWindow);
        action_Texture_Viewer->setObjectName(QStringLiteral("action_Texture_Viewer"));
        action_Pipeline_State = new QAction(MainWindow);
        action_Pipeline_State->setObjectName(QStringLiteral("action_Pipeline_State"));
        action_Capture_Log = new QAction(MainWindow);
        action_Capture_Log->setObjectName(QStringLiteral("action_Capture_Log"));
        action_Attach_to_Running_Instance = new QAction(MainWindow);
        action_Attach_to_Running_Instance->setObjectName(QStringLiteral("action_Attach_to_Running_Instance"));
        action_Open_Log = new QAction(MainWindow);
        action_Open_Log->setObjectName(QStringLiteral("action_Open_Log"));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        action_Exit->setMenuRole(QAction::QuitRole);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 736, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(action_Capture_Log);
        menuFile->addAction(action_Attach_to_Running_Instance);
        menuFile->addSeparator();
        menuFile->addAction(action_Open_Log);
        menuFile->addAction(action_Exit);
        menuWindow->addAction(action_Event_Viewer);
        menuWindow->addAction(action_Texture_Viewer);
        menuWindow->addAction(action_Pipeline_State);
        menuTools->addAction(action_Resolve_Symbols);
        menuTools->addAction(action_Log_Statistics);
        menuTools->addSeparator();
        menuTools->addAction(action_Options);
        menuHelp->addAction(actionView_Documentation);
        menuHelp->addAction(actionView_Diagnostic_Log_File);
        menuHelp->addSeparator();
        menuHelp->addAction(actionUpdate);
        menuHelp->addSeparator();
        menuHelp->addAction(actionSource_on_github);
        menuHelp->addAction(actionDeveloper_Forums);
        menuHelp->addAction(action_About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QRenderDoc", 0));
        actionView_Diagnostic_Log_File->setText(QApplication::translate("MainWindow", "View Diagnostic &Log File", 0));
        actionUpdate->setText(QApplication::translate("MainWindow", "No update available", 0));
        actionSource_on_github->setText(QApplication::translate("MainWindow", "Source on github", 0));
        actionDeveloper_Forums->setText(QApplication::translate("MainWindow", "Developer Forums", 0));
        action_About->setText(QApplication::translate("MainWindow", "&About", 0));
        actionView_Documentation->setText(QApplication::translate("MainWindow", "View &Documentation", 0));
        actionView_Documentation->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        action_Resolve_Symbols->setText(QApplication::translate("MainWindow", "&Resolve Symbols", 0));
        action_Log_Statistics->setText(QApplication::translate("MainWindow", "&Log Statistics", 0));
        action_Options->setText(QApplication::translate("MainWindow", "&Options", 0));
        action_Event_Viewer->setText(QApplication::translate("MainWindow", "&Event Viewer", 0));
        action_Texture_Viewer->setText(QApplication::translate("MainWindow", "&Texture Viewer", 0));
        action_Pipeline_State->setText(QApplication::translate("MainWindow", "&Pipeline State", 0));
        action_Capture_Log->setText(QApplication::translate("MainWindow", "&Capture Log", 0));
        action_Attach_to_Running_Instance->setText(QApplication::translate("MainWindow", "&Attach to Running Instance", 0));
        action_Open_Log->setText(QApplication::translate("MainWindow", "&Open Log", 0));
        action_Exit->setText(QApplication::translate("MainWindow", "&Exit", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menuWindow->setTitle(QApplication::translate("MainWindow", "&Window", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "&Tools", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
