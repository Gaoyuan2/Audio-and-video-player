#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include"player.h"

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

class menu : public QWidget
{
    Q_OBJECT

public:
    menu(QWidget *parent = nullptr);
    ~menu();
    Player *video;


private slots:
    void on_videoButton_clicked();
    void videoSub();

private:
    Ui::menu *ui;

};
#endif // MENU_H
