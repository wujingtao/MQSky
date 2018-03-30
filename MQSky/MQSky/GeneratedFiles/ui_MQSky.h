/********************************************************************************
** Form generated from reading UI file 'MQSky.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MQSKY_H
#define UI_MQSKY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MQSkyClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MQSkyClass)
    {
        if (MQSkyClass->objectName().isEmpty())
            MQSkyClass->setObjectName(QStringLiteral("MQSkyClass"));
        MQSkyClass->resize(600, 400);
        menuBar = new QMenuBar(MQSkyClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MQSkyClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MQSkyClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MQSkyClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MQSkyClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MQSkyClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MQSkyClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MQSkyClass->setStatusBar(statusBar);

        retranslateUi(MQSkyClass);

        QMetaObject::connectSlotsByName(MQSkyClass);
    } // setupUi

    void retranslateUi(QMainWindow *MQSkyClass)
    {
        MQSkyClass->setWindowTitle(QApplication::translate("MQSkyClass", "MQSky", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MQSkyClass: public Ui_MQSkyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQSKY_H
