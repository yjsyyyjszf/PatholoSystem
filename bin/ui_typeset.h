/********************************************************************************
** Form generated from reading UI file 'typeset.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPESET_H
#define UI_TYPESET_H

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

class Ui_typeset
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonExit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *typeset)
    {
        if (typeset->objectName().isEmpty())
            typeset->setObjectName(QStringLiteral("typeset"));
        typeset->resize(409, 451);
        verticalLayout_2 = new QVBoxLayout(typeset);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(typeset);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(typeset);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonNew = new QPushButton(typeset);
        pushButtonNew->setObjectName(QStringLiteral("pushButtonNew"));
        pushButtonNew->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    background-color: transparent;\n"
"    border-radius:5px;\n"
"    border:2px solid gray;\n"
"    color:black;\n"
"    height:20px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: rgb(0,130,150);\n"
"    border-radius:5px;\n"
"    color:white;\n"
"}\n"
"\n"
"QPushButton:hover:pressed\n"
"{\n"
"    background-color:rgb(85,170,255);\n"
"    border-radius:5px;\n"
"    color:white;\n"
"}"));

        horizontalLayout->addWidget(pushButtonNew);

        pushButtonUpdate = new QPushButton(typeset);
        pushButtonUpdate->setObjectName(QStringLiteral("pushButtonUpdate"));
        pushButtonUpdate->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    background-color: transparent;\n"
"    border-radius:5px;\n"
"    border:2px solid gray;\n"
"    color:black;\n"
"    height:20px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: rgb(0,130,150);\n"
"    border-radius:5px;\n"
"    color:white;\n"
"}\n"
"\n"
"QPushButton:hover:pressed\n"
"{\n"
"    background-color:rgb(85,170,255);\n"
"    border-radius:5px;\n"
"    color:white;\n"
"}"));

        horizontalLayout->addWidget(pushButtonUpdate);

        pushButtonDelete = new QPushButton(typeset);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));
        pushButtonDelete->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    background-color: transparent;\n"
"    border-radius:5px;\n"
"    border:2px solid gray;\n"
"    color:black;\n"
"    height:20px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: rgb(0,130,150);\n"
"    border-radius:5px;\n"
"    color:white;\n"
"}\n"
"\n"
"QPushButton:hover:pressed\n"
"{\n"
"    background-color:rgb(85,170,255);\n"
"    border-radius:5px;\n"
"    color:white;\n"
"}"));

        horizontalLayout->addWidget(pushButtonDelete);

        pushButtonExit = new QPushButton(typeset);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));
        pushButtonExit->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    background-color: transparent;\n"
"    border-radius:5px;\n"
"    border:2px solid gray;\n"
"    color:black;\n"
"    height:20px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: rgb(0,130,150);\n"
"    border-radius:5px;\n"
"    color:white;\n"
"}\n"
"\n"
"QPushButton:hover:pressed\n"
"{\n"
"    background-color:rgb(85,170,255);\n"
"    border-radius:5px;\n"
"    color:white;\n"
"}"));

        horizontalLayout->addWidget(pushButtonExit);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(typeset);

        QMetaObject::connectSlotsByName(typeset);
    } // setupUi

    void retranslateUi(QWidget *typeset)
    {
        typeset->setWindowTitle(QApplication::translate("typeset", "Form", 0));
        label->setText(QApplication::translate("typeset", "\345\256\232\344\271\211\346\240\207\346\234\254\347\261\273\345\210\253", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("typeset", "\345\211\215\347\274\200", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("typeset", "\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("typeset", "\346\226\260\345\273\272\350\241\214", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("typeset", "\346\226\260\345\273\272\350\241\214", 0));
        pushButtonNew->setText(QApplication::translate("typeset", "\346\226\260\345\273\272", 0));
        pushButtonUpdate->setText(QApplication::translate("typeset", "\344\277\256\346\224\271", 0));
        pushButtonDelete->setText(QApplication::translate("typeset", "\345\210\240\351\231\244", 0));
        pushButtonExit->setText(QApplication::translate("typeset", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class typeset: public Ui_typeset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPESET_H
