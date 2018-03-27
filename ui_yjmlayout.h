/********************************************************************************
** Form generated from reading UI file 'yjmlayout.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YJMLAYOUT_H
#define UI_YJMLAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YjmLayout
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nLabel;
    QLineEdit *nLineEdit;
    QLabel *sLabel;
    QComboBox *sComboBox;
    QLabel *aLabel;
    QSpinBox *aSpinBox;
    QLabel *mLabel;
    QLineEdit *mLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QPushButton *pushButtonHideText;
    QTextEdit *textEdit;

    void setupUi(QWidget *YjmLayout)
    {
        if (YjmLayout->objectName().isEmpty())
            YjmLayout->setObjectName(QStringLiteral("YjmLayout"));
        YjmLayout->resize(492, 439);
        verticalLayout = new QVBoxLayout(YjmLayout);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nLabel = new QLabel(YjmLayout);
        nLabel->setObjectName(QStringLiteral("nLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nLabel);

        nLineEdit = new QLineEdit(YjmLayout);
        nLineEdit->setObjectName(QStringLiteral("nLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nLineEdit);

        sLabel = new QLabel(YjmLayout);
        sLabel->setObjectName(QStringLiteral("sLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, sLabel);

        sComboBox = new QComboBox(YjmLayout);
        sComboBox->setObjectName(QStringLiteral("sComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, sComboBox);

        aLabel = new QLabel(YjmLayout);
        aLabel->setObjectName(QStringLiteral("aLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, aLabel);

        aSpinBox = new QSpinBox(YjmLayout);
        aSpinBox->setObjectName(QStringLiteral("aSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, aSpinBox);

        mLabel = new QLabel(YjmLayout);
        mLabel->setObjectName(QStringLiteral("mLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mLabel);

        mLineEdit = new QLineEdit(YjmLayout);
        mLineEdit->setObjectName(QStringLiteral("mLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mLineEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fontComboBox = new QFontComboBox(YjmLayout);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(fontComboBox);

        pushButtonHideText = new QPushButton(YjmLayout);
        pushButtonHideText->setObjectName(QStringLiteral("pushButtonHideText"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonHideText->sizePolicy().hasHeightForWidth());
        pushButtonHideText->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButtonHideText);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(YjmLayout);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

#ifndef QT_NO_SHORTCUT
        nLabel->setBuddy(nLineEdit);
        sLabel->setBuddy(sComboBox);
        aLabel->setBuddy(aSpinBox);
        mLabel->setBuddy(mLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(YjmLayout);

        QMetaObject::connectSlotsByName(YjmLayout);
    } // setupUi

    void retranslateUi(QWidget *YjmLayout)
    {
        YjmLayout->setWindowTitle(QApplication::translate("YjmLayout", "Form", 0));
        nLabel->setText(QApplication::translate("YjmLayout", "\345\247\223\345\220\215(&N):", 0));
        sLabel->setText(QApplication::translate("YjmLayout", "\346\200\247\345\210\253(&S)", 0));
        sComboBox->clear();
        sComboBox->insertItems(0, QStringList()
         << QApplication::translate("YjmLayout", "\345\245\263", 0)
         << QApplication::translate("YjmLayout", "\347\224\267", 0)
        );
        aLabel->setText(QApplication::translate("YjmLayout", "\345\271\264\351\276\204(&A)", 0));
        mLabel->setText(QApplication::translate("YjmLayout", "\351\202\256\347\256\261(&M)", 0));
        pushButtonHideText->setText(QApplication::translate("YjmLayout", "\346\230\276\347\244\272\345\217\257\346\211\251\345\261\225\346\216\247\344\273\266", 0));
    } // retranslateUi

};

namespace Ui {
    class YjmLayout: public Ui_YjmLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YJMLAYOUT_H
