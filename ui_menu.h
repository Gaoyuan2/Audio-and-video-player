/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QWidget *widget;
    QPushButton *videoButton;
    QLabel *label;
    QWidget *widget_4;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(800, 600);
        menu->setAutoFillBackground(true);
        menu->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(menu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 130, 200, 300));
        videoButton = new QPushButton(widget);
        videoButton->setObjectName(QString::fromUtf8("videoButton"));
        videoButton->setGeometry(QRect(0, -30, 200, 200));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/video_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        videoButton->setIcon(icon);
        videoButton->setIconSize(QSize(200, 200));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 210, 141, 21));
        label->setTextFormat(Qt::AutoText);
        widget_4 = new QWidget(menu);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(0, 0, 791, 591));
        widget_4->setAutoFillBackground(false);
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/icon/background.png);"));
        widget_4->raise();
        widget->raise();

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "menu", nullptr));
        videoButton->setText(QString());
        label->setText(QCoreApplication::translate("menu", "\351\237\263/\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
