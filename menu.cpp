#include "menu.h"
#include "ui_menu.h"
#include<QDebug>
menu::menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);

    video=new Player();

    connect(video,&Player::mySignal,this,&menu::videoSub);//建立连接，player窗口点击退出，发送信号，调用videoSub（）显示菜单

}

menu::~menu()
{
    delete ui;
}

void menu::videoSub()
{

    this->show();

}



void menu::on_videoButton_clicked()//音视频播放器按钮
{
    this->hide();
    video->show();
}
