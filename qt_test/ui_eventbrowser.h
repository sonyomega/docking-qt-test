/********************************************************************************
** Form generated from reading UI file 'eventbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTBROWSER_H
#define UI_EVENTBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventBrowser
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QRadioButton *radioButton;
    QToolButton *toolButton;
    QProgressBar *progressBar;
    QCheckBox *checkBox;

    void setupUi(QMainWindow *EventBrowser)
    {
        if (EventBrowser->objectName().isEmpty())
            EventBrowser->setObjectName(QStringLiteral("EventBrowser"));
        EventBrowser->resize(587, 440);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        EventBrowser->setWindowIcon(icon);
        dockWidgetContents = new QWidget(EventBrowser);
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setAllColumnsShowFocus(false);
        treeWidget->setHeaderHidden(false);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 2);

        radioButton = new QRadioButton(dockWidgetContents);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout->addWidget(radioButton, 0, 2, 1, 1);

        toolButton = new QToolButton(dockWidgetContents);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout->addWidget(toolButton, 1, 1, 1, 1);

        progressBar = new QProgressBar(dockWidgetContents);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 1, 2, 1, 1);

        checkBox = new QCheckBox(dockWidgetContents);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 2, 0, 1, 1);

        EventBrowser->setCentralWidget(dockWidgetContents);

        retranslateUi(EventBrowser);

        QMetaObject::connectSlotsByName(EventBrowser);
    } // setupUi

    void retranslateUi(QMainWindow *EventBrowser)
    {
        EventBrowser->setWindowTitle(QApplication::translate("EventBrowser", "EventBrowser", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("EventBrowser", "Duration (us)", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("EventBrowser", "Name", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("EventBrowser", "Draw #", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("EventBrowser", "EID", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("EventBrowser", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("EventBrowser", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("EventBrowser", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("EventBrowser", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("EventBrowser", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem6->setText(0, QApplication::translate("EventBrowser", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(0, QApplication::translate("EventBrowser", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("EventBrowser", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QApplication::translate("EventBrowser", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QApplication::translate("EventBrowser", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem8->child(2);
        ___qtreewidgetitem11->setText(0, QApplication::translate("EventBrowser", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem7->child(1);
        ___qtreewidgetitem12->setText(0, QApplication::translate("EventBrowser", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem7->child(2);
        ___qtreewidgetitem13->setText(0, QApplication::translate("EventBrowser", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem7->child(3);
        ___qtreewidgetitem14->setText(0, QApplication::translate("EventBrowser", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem15 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem15->setText(0, QApplication::translate("EventBrowser", "New Item", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        radioButton->setText(QApplication::translate("EventBrowser", "RadioButton", 0));
        toolButton->setText(QApplication::translate("EventBrowser", "...", 0));
        checkBox->setText(QApplication::translate("EventBrowser", "CheckBox", 0));
    } // retranslateUi

};

namespace Ui {
    class EventBrowser: public Ui_EventBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTBROWSER_H
