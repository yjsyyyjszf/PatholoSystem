/********************************************************************************
** Form generated from reading UI file 'newslices.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSLICES_H
#define UI_NEWSLICES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newslices
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *comboBoxType;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpinBox *spinBoxPrintNumber;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QCheckBox *checkBoxPrint;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *newslices)
    {
        if (newslices->objectName().isEmpty())
            newslices->setObjectName(QStringLiteral("newslices"));
        newslices->resize(338, 261);
        groupBox = new QGroupBox(newslices);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 0, 291, 211));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(label);

        comboBoxType = new QComboBox(groupBox);
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));
        comboBoxType->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(comboBoxType);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(label_2);

        spinBoxPrintNumber = new QSpinBox(groupBox);
        spinBoxPrintNumber->setObjectName(QStringLiteral("spinBoxPrintNumber"));
        spinBoxPrintNumber->setMinimumSize(QSize(90, 0));

        horizontalLayout_2->addWidget(spinBoxPrintNumber);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(label_3);

        checkBoxPrint = new QCheckBox(groupBox);
        checkBoxPrint->setObjectName(QStringLiteral("checkBoxPrint"));

        horizontalLayout_3->addWidget(checkBoxPrint);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        pushButtonOk = new QPushButton(newslices);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(60, 220, 80, 30));
        pushButtonOk->setMinimumSize(QSize(0, 30));
        pushButtonCancel = new QPushButton(newslices);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(190, 220, 80, 30));
        pushButtonCancel->setMinimumSize(QSize(0, 30));

        retranslateUi(newslices);

        QMetaObject::connectSlotsByName(newslices);
    } // setupUi

    void retranslateUi(QDialog *newslices)
    {
        newslices->setWindowTitle(QApplication::translate("newslices", "Dialog", 0));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("newslices", "\347\261\273    \345\210\253:", 0));
        label_2->setText(QApplication::translate("newslices", "\346\211\223\345\215\260\346\225\260\351\207\217:", 0));
        label_3->setText(QString());
        checkBoxPrint->setText(QApplication::translate("newslices", "\347\241\256\345\256\232\345\220\214\346\227\266\346\211\223\345\215\260", 0));
        pushButtonOk->setText(QApplication::translate("newslices", "\347\241\256\345\256\232", 0));
        pushButtonCancel->setText(QApplication::translate("newslices", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class newslices: public Ui_newslices {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSLICES_H