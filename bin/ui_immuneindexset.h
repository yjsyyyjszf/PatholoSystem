/********************************************************************************
** Form generated from reading UI file 'immuneindexset.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMMUNEINDEXSET_H
#define UI_IMMUNEINDEXSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_immuneindexset
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonExit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *immuneindexset)
    {
        if (immuneindexset->objectName().isEmpty())
            immuneindexset->setObjectName(QStringLiteral("immuneindexset"));
        immuneindexset->resize(409, 451);
        verticalLayout_2 = new QVBoxLayout(immuneindexset);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(immuneindexset);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(immuneindexset);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonNew = new QPushButton(immuneindexset);
        pushButtonNew->setObjectName(QStringLiteral("pushButtonNew"));

        horizontalLayout->addWidget(pushButtonNew);

        pushButtonDelete = new QPushButton(immuneindexset);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));

        horizontalLayout->addWidget(pushButtonDelete);

        pushButtonUpdate = new QPushButton(immuneindexset);
        pushButtonUpdate->setObjectName(QStringLiteral("pushButtonUpdate"));

        horizontalLayout->addWidget(pushButtonUpdate);

        pushButtonExit = new QPushButton(immuneindexset);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));

        horizontalLayout->addWidget(pushButtonExit);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(immuneindexset);

        QMetaObject::connectSlotsByName(immuneindexset);
    } // setupUi

    void retranslateUi(QWidget *immuneindexset)
    {
        immuneindexset->setWindowTitle(QApplication::translate("immuneindexset", "Form", 0));
        label->setText(QApplication::translate("immuneindexset", "\345\256\232\344\271\211\346\237\223\350\211\262\346\214\207\346\240\207", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("immuneindexset", "\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("immuneindexset", "\346\226\260\345\273\272\350\241\214", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("immuneindexset", "\346\226\260\345\273\272\350\241\214", 0));
        pushButtonNew->setText(QApplication::translate("immuneindexset", "\346\226\260\345\273\272", 0));
        pushButtonDelete->setText(QApplication::translate("immuneindexset", "\345\210\240\351\231\244", 0));
        pushButtonUpdate->setText(QApplication::translate("immuneindexset", "\344\277\256\346\224\271", 0));
        pushButtonExit->setText(QApplication::translate("immuneindexset", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class immuneindexset: public Ui_immuneindexset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMMUNEINDEXSET_H