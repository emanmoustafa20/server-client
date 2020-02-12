/********************************************************************************
** Form generated from reading UI file 'clientside.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTSIDE_H
#define UI_CLIENTSIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientSide
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClientSide)
    {
        if (ClientSide->objectName().isEmpty())
            ClientSide->setObjectName(QStringLiteral("ClientSide"));
        ClientSide->resize(400, 300);
        centralWidget = new QWidget(ClientSide);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 40, 91, 21));
        ClientSide->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ClientSide);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        ClientSide->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ClientSide);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ClientSide->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ClientSide);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ClientSide->setStatusBar(statusBar);

        retranslateUi(ClientSide);

        QMetaObject::connectSlotsByName(ClientSide);
    } // setupUi

    void retranslateUi(QMainWindow *ClientSide)
    {
        ClientSide->setWindowTitle(QApplication::translate("ClientSide", "ClientSide", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ClientSide", "Connect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientSide: public Ui_ClientSide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTSIDE_H
