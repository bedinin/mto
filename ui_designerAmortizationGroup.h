/********************************************************************************
** Form generated from reading UI file 'designerAmortizationGroup.ui'
**
** Created: Mon 29. Jul 22:01:18 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGNERAMORTIZATIONGROUP_H
#define UI_DESIGNERAMORTIZATIONGROUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_designerAmortizationGroup
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *table;
    QLineEdit *leName;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btAdd;
    QPushButton *btSave;
    QPushButton *btDelete;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *designerAmortizationGroup)
    {
        if (designerAmortizationGroup->objectName().isEmpty())
            designerAmortizationGroup->setObjectName(QString::fromUtf8("designerAmortizationGroup"));
        designerAmortizationGroup->resize(400, 300);
        verticalLayout = new QVBoxLayout(designerAmortizationGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        table = new QTableWidget(designerAmortizationGroup);
        if (table->columnCount() < 1)
            table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        table->setObjectName(QString::fromUtf8("table"));
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->horizontalHeader()->setCascadingSectionResizes(true);
        table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table->horizontalHeader()->setStretchLastSection(true);
        table->verticalHeader()->setVisible(false);
        table->verticalHeader()->setCascadingSectionResizes(true);
        table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        table->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(table);

        leName = new QLineEdit(designerAmortizationGroup);
        leName->setObjectName(QString::fromUtf8("leName"));

        verticalLayout->addWidget(leName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btAdd = new QPushButton(designerAmortizationGroup);
        btAdd->setObjectName(QString::fromUtf8("btAdd"));

        horizontalLayout->addWidget(btAdd);

        btSave = new QPushButton(designerAmortizationGroup);
        btSave->setObjectName(QString::fromUtf8("btSave"));
        btSave->setEnabled(false);

        horizontalLayout->addWidget(btSave);

        btDelete = new QPushButton(designerAmortizationGroup);
        btDelete->setObjectName(QString::fromUtf8("btDelete"));
        btDelete->setEnabled(false);

        horizontalLayout->addWidget(btDelete);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(designerAmortizationGroup);

        QMetaObject::connectSlotsByName(designerAmortizationGroup);
    } // setupUi

    void retranslateUi(QWidget *designerAmortizationGroup)
    {
        designerAmortizationGroup->setWindowTitle(QApplication::translate("designerAmortizationGroup", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("designerAmortizationGroup", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        btAdd->setText(QApplication::translate("designerAmortizationGroup", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        btSave->setText(QApplication::translate("designerAmortizationGroup", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        btDelete->setText(QApplication::translate("designerAmortizationGroup", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class designerAmortizationGroup: public Ui_designerAmortizationGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGNERAMORTIZATIONGROUP_H
