/********************************************************************************
** Form generated from reading UI file 'designerNecessaryEdit.ui'
**
** Created: Sat 27. Jul 23:09:21 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGNERNECESSARYEDIT_H
#define UI_DESIGNERNECESSARYEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_designerNecessaryEdit
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *cbDivisions;
    QTableWidget *table;
    QLineEdit *leName;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btSave;
    QPushButton *btCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *designerNecessaryEdit)
    {
        if (designerNecessaryEdit->objectName().isEmpty())
            designerNecessaryEdit->setObjectName(QString::fromUtf8("designerNecessaryEdit"));
        designerNecessaryEdit->resize(400, 300);
        verticalLayout = new QVBoxLayout(designerNecessaryEdit);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbDivisions = new QComboBox(designerNecessaryEdit);
        cbDivisions->setObjectName(QString::fromUtf8("cbDivisions"));

        verticalLayout->addWidget(cbDivisions);

        table = new QTableWidget(designerNecessaryEdit);
        if (table->columnCount() < 2)
            table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
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

        leName = new QLineEdit(designerNecessaryEdit);
        leName->setObjectName(QString::fromUtf8("leName"));

        verticalLayout->addWidget(leName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btSave = new QPushButton(designerNecessaryEdit);
        btSave->setObjectName(QString::fromUtf8("btSave"));
        btSave->setEnabled(false);

        horizontalLayout->addWidget(btSave);

        btCancel = new QPushButton(designerNecessaryEdit);
        btCancel->setObjectName(QString::fromUtf8("btCancel"));
        btCancel->setEnabled(true);

        horizontalLayout->addWidget(btCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(designerNecessaryEdit);

        QMetaObject::connectSlotsByName(designerNecessaryEdit);
    } // setupUi

    void retranslateUi(QWidget *designerNecessaryEdit)
    {
        designerNecessaryEdit->setWindowTitle(QApplication::translate("designerNecessaryEdit", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("designerNecessaryEdit", "\320\235\320\276\320\274\320\265\320\275\320\272\320\273\320\260\321\202\321\203\321\200\320\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("designerNecessaryEdit", "\320\237\320\276\320\273\320\276\320\266\320\265\320\275\320\275\320\276\321\201\321\202\321\214", 0, QApplication::UnicodeUTF8));
        btSave->setText(QApplication::translate("designerNecessaryEdit", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        btCancel->setText(QApplication::translate("designerNecessaryEdit", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class designerNecessaryEdit: public Ui_designerNecessaryEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGNERNECESSARYEDIT_H
