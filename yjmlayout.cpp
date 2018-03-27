#include "yjmlayout.h"
#include "ui_yjmlayout.h"

YjmLayout::YjmLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::YjmLayout)
{
    ui->setupUi(this);
}

YjmLayout::~YjmLayout()
{
    delete ui;
}

void YjmLayout::on_pushButtonHideText_clicked()
{
    static bool bShow = true;
    bShow = !bShow;
    ui->textEdit->setVisible(bShow);
}
