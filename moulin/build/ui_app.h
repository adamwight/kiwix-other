/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created: Tue 9. Feb 20:52:26 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_App
{
public:
    QLabel *label_logo;
    QPushButton *pushButton_run;
    QPushButton *pushButton_install;
    QPushButton *pushButton_quit;

    void setupUi(QDialog *App)
    {
        if (App->objectName().isEmpty())
            App->setObjectName(QString::fromUtf8("App"));
        App->resize(296, 301);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource1/moulin.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        App->setWindowIcon(icon);
        App->setLayoutDirection(Qt::RightToLeft);
        label_logo = new QLabel(App);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));
        label_logo->setGeometry(QRect(0, 0, 300, 200));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/resource1/autorun.png")));
        pushButton_run = new QPushButton(App);
        pushButton_run->setObjectName(QString::fromUtf8("pushButton_run"));
        pushButton_run->setGeometry(QRect(0, 210, 291, 27));
        pushButton_run->setLayoutDirection(Qt::RightToLeft);
        pushButton_install = new QPushButton(App);
        pushButton_install->setObjectName(QString::fromUtf8("pushButton_install"));
        pushButton_install->setGeometry(QRect(0, 240, 291, 27));
        pushButton_install->setLayoutDirection(Qt::RightToLeft);
        pushButton_quit = new QPushButton(App);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(0, 270, 291, 27));
        pushButton_quit->setLayoutDirection(Qt::RightToLeft);

        retranslateUi(App);

        QMetaObject::connectSlotsByName(App);
    } // setupUi

    void retranslateUi(QDialog *App)
    {
        App->setWindowTitle(QApplication::translate("App", "Kiwix launcher", 0, QApplication::UnicodeUTF8));
        label_logo->setText(QString());
        pushButton_run->setText(QApplication::translate("App", "Launch kiwix from here", 0, QApplication::UnicodeUTF8));
        pushButton_install->setText(QApplication::translate("App", "Install kiwix to your Hard Drive", 0, QApplication::UnicodeUTF8));
        pushButton_quit->setText(QApplication::translate("App", "Quit this menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class App: public Ui_App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
