/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

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

class Ui_SecDialog
{
public:
    QLabel *label_rupiah;
    QPushButton *pushButton_tambah;
    QPushButton *pushButton_input;
    QPushButton *pushButton_clear;
    QLabel *label_kembali;
    QTableView *tableView;
    QPushButton *pushButton_load;
    QLabel *label_rupiah2;
    QPushButton *pushButton_hitung;
    QLabel *label_status;
    QLabel *label_total;
    QLabel *label_titletotal;
    QLabel *label_titilekembalian;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_kodebarang;
    QLabel *label_namabarang;
    QLabel *label_jumlbeli;
    QLabel *label_harga;
    QLabel *label_cash;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_kodebarang;
    QLineEdit *lineEdit_kodebarang_2;
    QLineEdit *lineEdit_kodebarang_3;
    QLineEdit *lineEdit_namabarang;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_jumbeli;
    QLineEdit *lineEdit_harga;
    QLineEdit *lineEdit_cash;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QStringLiteral("SecDialog"));
        SecDialog->resize(802, 707);
        label_rupiah = new QLabel(SecDialog);
        label_rupiah->setObjectName(QStringLiteral("label_rupiah"));
        label_rupiah->setGeometry(QRect(501, 91, 41, 37));
        QFont font;
        font.setPointSize(20);
        label_rupiah->setFont(font);
        pushButton_tambah = new QPushButton(SecDialog);
        pushButton_tambah->setObjectName(QStringLiteral("pushButton_tambah"));
        pushButton_tambah->setGeometry(QRect(30, 310, 80, 25));
        pushButton_input = new QPushButton(SecDialog);
        pushButton_input->setObjectName(QStringLiteral("pushButton_input"));
        pushButton_input->setGeometry(QRect(600, 610, 151, 31));
        pushButton_clear = new QPushButton(SecDialog);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(300, 310, 80, 25));
        label_kembali = new QLabel(SecDialog);
        label_kembali->setObjectName(QStringLiteral("label_kembali"));
        label_kembali->setGeometry(QRect(548, 91, 201, 37));
        label_kembali->setFont(font);
        tableView = new QTableView(SecDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 350, 491, 241));
        pushButton_load = new QPushButton(SecDialog);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));
        pushButton_load->setGeometry(QRect(120, 310, 80, 25));
        label_rupiah2 = new QLabel(SecDialog);
        label_rupiah2->setObjectName(QStringLiteral("label_rupiah2"));
        label_rupiah2->setGeometry(QRect(501, 211, 48, 37));
        label_rupiah2->setFont(font);
        pushButton_hitung = new QPushButton(SecDialog);
        pushButton_hitung->setObjectName(QStringLiteral("pushButton_hitung"));
        pushButton_hitung->setGeometry(QRect(650, 310, 80, 25));
        label_status = new QLabel(SecDialog);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(40, 610, 211, 34));
        label_total = new QLabel(SecDialog);
        label_total->setObjectName(QStringLiteral("label_total"));
        label_total->setGeometry(QRect(555, 211, 231, 37));
        label_total->setFont(font);
        label_titletotal = new QLabel(SecDialog);
        label_titletotal->setObjectName(QStringLiteral("label_titletotal"));
        label_titletotal->setGeometry(QRect(440, 160, 211, 31));
        QFont font1;
        font1.setPointSize(16);
        label_titletotal->setFont(font1);
        label_titilekembalian = new QLabel(SecDialog);
        label_titilekembalian->setObjectName(QStringLiteral("label_titilekembalian"));
        label_titilekembalian->setGeometry(QRect(440, 50, 211, 31));
        label_titilekembalian->setFont(font1);
        layoutWidget = new QWidget(SecDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(31, 61, 351, 181));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_kodebarang = new QLabel(layoutWidget);
        label_kodebarang->setObjectName(QStringLiteral("label_kodebarang"));

        verticalLayout_3->addWidget(label_kodebarang);

        label_namabarang = new QLabel(layoutWidget);
        label_namabarang->setObjectName(QStringLiteral("label_namabarang"));

        verticalLayout_3->addWidget(label_namabarang);

        label_jumlbeli = new QLabel(layoutWidget);
        label_jumlbeli->setObjectName(QStringLiteral("label_jumlbeli"));

        verticalLayout_3->addWidget(label_jumlbeli);

        label_harga = new QLabel(layoutWidget);
        label_harga->setObjectName(QStringLiteral("label_harga"));

        verticalLayout_3->addWidget(label_harga);

        label_cash = new QLabel(layoutWidget);
        label_cash->setObjectName(QStringLiteral("label_cash"));

        verticalLayout_3->addWidget(label_cash);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_kodebarang = new QLineEdit(layoutWidget);
        lineEdit_kodebarang->setObjectName(QStringLiteral("lineEdit_kodebarang"));

        horizontalLayout->addWidget(lineEdit_kodebarang);

        lineEdit_kodebarang_2 = new QLineEdit(layoutWidget);
        lineEdit_kodebarang_2->setObjectName(QStringLiteral("lineEdit_kodebarang_2"));

        horizontalLayout->addWidget(lineEdit_kodebarang_2);

        lineEdit_kodebarang_3 = new QLineEdit(layoutWidget);
        lineEdit_kodebarang_3->setObjectName(QStringLiteral("lineEdit_kodebarang_3"));

        horizontalLayout->addWidget(lineEdit_kodebarang_3);


        verticalLayout_2->addLayout(horizontalLayout);

        lineEdit_namabarang = new QLineEdit(layoutWidget);
        lineEdit_namabarang->setObjectName(QStringLiteral("lineEdit_namabarang"));

        verticalLayout_2->addWidget(lineEdit_namabarang);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_jumbeli = new QLineEdit(layoutWidget);
        lineEdit_jumbeli->setObjectName(QStringLiteral("lineEdit_jumbeli"));

        verticalLayout->addWidget(lineEdit_jumbeli);

        lineEdit_harga = new QLineEdit(layoutWidget);
        lineEdit_harga->setObjectName(QStringLiteral("lineEdit_harga"));

        verticalLayout->addWidget(lineEdit_harga);

        lineEdit_cash = new QLineEdit(layoutWidget);
        lineEdit_cash->setObjectName(QStringLiteral("lineEdit_cash"));

        verticalLayout->addWidget(lineEdit_cash);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "Dialog", nullptr));
        label_rupiah->setText(QApplication::translate("SecDialog", "Rp.", nullptr));
        pushButton_tambah->setText(QApplication::translate("SecDialog", "tambah", nullptr));
        pushButton_input->setText(QApplication::translate("SecDialog", "input data", nullptr));
        pushButton_clear->setText(QApplication::translate("SecDialog", "clear", nullptr));
        label_kembali->setText(QApplication::translate("SecDialog", " 0", nullptr));
        pushButton_load->setText(QApplication::translate("SecDialog", "load", nullptr));
        label_rupiah2->setText(QApplication::translate("SecDialog", "Rp. ", nullptr));
        pushButton_hitung->setText(QApplication::translate("SecDialog", "Hitung", nullptr));
        label_status->setText(QApplication::translate("SecDialog", "[+]Status", nullptr));
        label_total->setText(QApplication::translate("SecDialog", "0", nullptr));
        label_titletotal->setText(QApplication::translate("SecDialog", "Total Pembelian", nullptr));
        label_titilekembalian->setText(QApplication::translate("SecDialog", "Total Kembalian", nullptr));
        label_kodebarang->setText(QApplication::translate("SecDialog", "Kode Barang", nullptr));
        label_namabarang->setText(QApplication::translate("SecDialog", "Nama Barang", nullptr));
        label_jumlbeli->setText(QApplication::translate("SecDialog", "Jumlah beli", nullptr));
        label_harga->setText(QApplication::translate("SecDialog", "Harga Jual", nullptr));
        label_cash->setText(QApplication::translate("SecDialog", "cash", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
