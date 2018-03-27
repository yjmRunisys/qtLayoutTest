#include "userlayout.h"

#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QPushButton>

#pragma execution_character_set("utf-8")

UserLayout::UserLayout(QWidget *parent, Qt::WindowFlags flags)
    : QDialog(parent, flags)
{
    setWindowTitle(tr("用户基本资料"));

    //Left Loyout:
    labUser = new QLabel(tr("用户名:"));
    labName = new QLabel(tr("姓名;"));
    labSex = new QLabel(tr("性别:"));
    labDepartment = new QLabel(tr("部门:"));
    labAge = new QLabel(tr("年龄:"));
    labRemark = new QLabel(tr("备注:"));
    labRemark->setFrameStyle(QFrame::Panel|QFrame::Sunken);

    edtUser = new QLineEdit;
    edtName = new QLineEdit;
    cbbSex = new QComboBox;
    cbbSex->insertItem(0,tr("女"));
    cbbSex->insertItem(1,tr("男"));
    edtDepartment = new QTextEdit;
    edtAge = new QLineEdit;

    //左边，网格布局
    QGridLayout *leftLayou = new QGridLayout;
    int col_Lab = 0;//标签列
    int col_Content = 1;//内容列
    leftLayou->addWidget(labUser,0,col_Lab);
    leftLayou->addWidget(edtUser,0,col_Content);
    leftLayou->addWidget(labName,1,col_Lab);
    leftLayou->addWidget(edtName,1,col_Content);
    leftLayou->addWidget(labSex,2,col_Lab);
    leftLayou->addWidget(cbbSex,2,col_Content);
    leftLayou->addWidget(labDepartment,3,col_Lab);
    leftLayou->addWidget(edtDepartment,3,col_Content);
    leftLayou->addWidget(labAge,4,col_Lab);
    leftLayou->addWidget(edtAge,4,col_Content);
    leftLayou->addWidget(labRemark,5,col_Lab,1,2);

    //0列占空间1 ，1列占空间3
    leftLayou->setColumnStretch(0,1);    //设置两列分别占有空间的比例
    leftLayou->setColumnStretch(1,3);

    //Right Layout:
    labHead = new QLabel(tr("头像:"));
    labIcon = new QLabel;
    QPixmap m_icon("res\\head.gif");
    labIcon->resize(m_icon.width(),m_icon.height());//labIcon设置成和头像一样大
    labIcon->setPixmap(m_icon);
    labIndividual = new QLabel(tr("个人说明:"));
    edtIndividual = new QTextEdit;

    btnChange = new QPushButton(tr("更新"));
    //水平布局
    QHBoxLayout *headLayout = new QHBoxLayout;
    headLayout->addWidget(labHead);
    headLayout->addWidget(labIcon);
    headLayout->addWidget(btnChange);
    headLayout->setSpacing(20);  //控件间距为20像素
    headLayout->setMargin(1);//控件与窗体之间

    //竖直布局
    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addLayout(headLayout);
    rightLayout->addWidget(labIndividual);
    rightLayout->addWidget(edtIndividual);
    rightLayout->setMargin(10);

    //Bottom Layout:
    btnOk = new QPushButton(tr("Ok"));
    btnCancel = new QPushButton(tr("Cancel"));

    QHBoxLayout *bottomLayout = new QHBoxLayout;
    bottomLayout->addStretch();  //左下角，添加一个占位符，加入一个spacer，
    bottomLayout->addWidget(btnOk);
    bottomLayout->addWidget(btnCancel);
    bottomLayout->setSpacing(10);

    //Main Layout:
    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->addLayout(leftLayou,0,0);
    mainLayout->addLayout(rightLayout,0,1);
    mainLayout->addLayout(bottomLayout,1,0,1,2);//放在格子(1,0)占1行2列
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);    //设置对话框大小固定，不允许用户改变

}

UserLayout::~UserLayout()
{

}
