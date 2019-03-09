/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_add;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_load;
    QPushButton *pushButton_clear;
    QLabel *label_status;
    QTableView *tableView;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_kode;
    QLabel *label_nama;
    QLabel *label_harga;
    QLabel *label_kuantitas;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_kode;
    QLineEdit *lineEdit_nama;
    QLineEdit *lineEdit_harga;
    QLineEdit *lineEdit_kuantitas;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(554, 817);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 350, 426, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_add = new QPushButton(layoutWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        horizontalLayout_2->addWidget(pushButton_add);

        pushButton_delete = new QPushButton(layoutWidget);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        horizontalLayout_2->addWidget(pushButton_delete);

        pushButton_edit = new QPushButton(layoutWidget);
        pushButton_edit->setObjectName(QStringLiteral("pushButton_edit"));

        horizontalLayout_2->addWidget(pushButton_edit);

        pushButton_load = new QPushButton(layoutWidget);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));

        horizontalLayout_2->addWidget(pushButton_load);

        pushButton_clear = new QPushButton(layoutWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));

        horizontalLayout_2->addWidget(pushButton_clear);

        label_status = new QLabel(Dialog);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(20, 780, 271, 34));
        tableView = new QTableView(Dialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 400, 471, 351));
        layoutWidget_2 = new QWidget(Dialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 10, 471, 301));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_kode = new QLabel(layoutWidget_2);
        label_kode->setObjectName(QStringLiteral("label_kode"));

        verticalLayout->addWidget(label_kode);

        label_nama = new QLabel(layoutWidget_2);
        label_nama->setObjectName(QStringLiteral("label_nama"));

        verticalLayout->addWidget(label_nama);

        label_harga = new QLabel(layoutWidget_2);
        label_harga->setObjectName(QStringLiteral("label_harga"));

        verticalLayout->addWidget(label_harga);

        label_kuantitas = new QLabel(layoutWidget_2);
        label_kuantitas->setObjectName(QStringLiteral("label_kuantitas"));

        verticalLayout->addWidget(label_kuantitas);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_kode = new QLineEdit(layoutWidget_2);
        lineEdit_kode->setObjectName(QStringLiteral("lineEdit_kode"));

        verticalLayout_2->addWidget(lineEdit_kode);

        lineEdit_nama = new QLineEdit(layoutWidget_2);
        lineEdit_nama->setObjectName(QStringLiteral("lineEdit_nama"));

        verticalLayout_2->addWidget(lineEdit_nama);

        lineEdit_harga = new QLineEdit(layoutWidget_2);
        lineEdit_harga->setObjectName(QStringLiteral("lineEdit_harga"));

        verticalLayout_2->addWidget(lineEdit_harga);

        lineEdit_kuantitas = new QLineEdit(layoutWidget_2);
        lineEdit_kuantitas->setObjectName(QStringLiteral("lineEdit_kuantitas"));

        verticalLayout_2->addWidget(lineEdit_kuantitas);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_add->setText(QApplication::translate("Dialog", "Add", nullptr));
        pushButton_delete->setText(QApplication::translate("Dialog", "delete", nullptr));
        pushButton_edit->setText(QApplication::translate("Dialog", "ubah", nullptr));
        pushButton_load->setText(QApplication::translate("Dialog", "load", nullptr));
        pushButton_clear->setText(QApplication::translate("Dialog", "clear", nullptr));
        label_status->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_kode->setText(QApplication::translate("Dialog", "Kode Barang", nullptr));
        label_nama->setText(QApplication::translate("Dialog", "Nama Barang", nullptr));
        label_harga->setText(QApplication::translate("Dialog", "Harga", nullptr));
        label_kuantitas->setText(QApplication::translate("Dialog", "Kuantitas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
