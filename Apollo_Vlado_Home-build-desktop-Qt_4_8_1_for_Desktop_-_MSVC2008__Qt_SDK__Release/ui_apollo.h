/********************************************************************************
** Form generated from reading UI file 'apollo.ui'
**
** Created: Sun Oct 7 18:09:57 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APOLLO_H
#define UI_APOLLO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Apollo
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *info_text_box;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *type_label;
    QSpacerItem *horizontalSpacer;
    QComboBox *check_type;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *region_label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *region_name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *lineEdit_6;
    QPushButton *check_button;

    void setupUi(QMainWindow *Apollo)
    {
        if (Apollo->objectName().isEmpty())
            Apollo->setObjectName(QString::fromUtf8("Apollo"));
        Apollo->resize(268, 467);
        centralWidget = new QWidget(Apollo);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        info_text_box = new QTextBrowser(centralWidget);
        info_text_box->setObjectName(QString::fromUtf8("info_text_box"));

        verticalLayout_2->addWidget(info_text_box);

        verticalSpacer_2 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        type_label = new QLabel(centralWidget);
        type_label->setObjectName(QString::fromUtf8("type_label"));

        horizontalLayout->addWidget(type_label);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        check_type = new QComboBox(centralWidget);
        check_type->setObjectName(QString::fromUtf8("check_type"));

        horizontalLayout->addWidget(check_type);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        region_label = new QLabel(centralWidget);
        region_label->setObjectName(QString::fromUtf8("region_label"));

        horizontalLayout_2->addWidget(region_label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        region_name = new QLineEdit(centralWidget);
        region_name->setObjectName(QString::fromUtf8("region_name"));

        horizontalLayout_2->addWidget(region_name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_5->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_6->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_7->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_8->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_9->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(verticalLayout);

        check_button = new QPushButton(centralWidget);
        check_button->setObjectName(QString::fromUtf8("check_button"));

        verticalLayout_2->addWidget(check_button);

        Apollo->setCentralWidget(centralWidget);

        retranslateUi(Apollo);
        QObject::connect(check_button, SIGNAL(clicked()), Apollo, SLOT(OutputCheckButtonClicked()));

        QMetaObject::connectSlotsByName(Apollo);
    } // setupUi

    void retranslateUi(QMainWindow *Apollo)
    {
        Apollo->setWindowTitle(QApplication::translate("Apollo", "Apollo", 0, QApplication::UnicodeUTF8));
        info_text_box->setHtml(QApplication::translate("Apollo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\232\321\200\320\260\321\202\320\272\320\260 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\272\320\260\320\272 \320\264\320\260 \321\201\320\265 \320\270\320\267\320\277\320\276\320\273\320\267\320\262\320\260 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265\321\202\320\276.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        type_label->setText(QApplication::translate("Apollo", "\320\242\320\270\320\277 \321\201\320\277\321\200\320\260\320\262\320\272\320\260:", 0, QApplication::UnicodeUTF8));
        check_type->clear();
        check_type->insertItems(0, QStringList()
         << QApplication::translate("Apollo", "\320\237\321\200\320\276\320\264\320\260\320\266\320\261\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Apollo", "\320\227\320\260\320\273\320\270\321\207\320\260\320\262\320\260\320\275\320\265 \320\275\320\260 \320\270\320\277\320\276\321\202\320\265\320\272\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Apollo", "\320\227\320\260\320\272\320\276\320\275\320\275\320\260 \320\270\320\277\320\276\321\202\320\265\320\272\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Apollo", "\320\224\320\276\320\263\320\276\320\262\320\276\321\200\320\275\320\260 \320\270\320\277\320\276\321\202\320\265\320\272\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Apollo", "\320\224\320\260\321\200\320\265\320\275\320\270\321\217 \321\200\320\276\320\264\320\275\320\270\320\275\320\270 - \321\201\321\212\321\200\320\265\320\261\321\200\320\265\320\275\320\260 \320\273\320\270\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Apollo", "\320\224\320\260\321\200\320\265\320\275\320\270\321\217 \321\200\320\276\320\264\320\275\320\270\320\275\320\270 - \320\277\321\200\320\260\320\262\320\275\320\260 \320\273\320\270\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Apollo", "\320\224\320\260\321\200\320\265\320\275\320\270\321\217 \320\275\320\265\321\201\320\262\321\212\321\200\320\267\320\260\320\275\320\270 \320\273\320\270\321\206\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Apollo", "\320\234\320\237\320\241", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("Apollo", "\320\241\321\202\320\276\320\271\320\275\320\276\321\201\321\202 \320\277\320\276 \320\275\320\276\321\202\320\260\321\200\320\270\320\260\320\273\320\265\320\275 \320\260\320\272\321\202:", 0, QApplication::UnicodeUTF8));
        region_label->setText(QApplication::translate("Apollo", "\320\236\320\261\321\211\320\270\320\275\320\260:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Apollo", "\320\224\320\260\320\275\321\212\321\207\320\275\320\260 \321\201\320\273\321\203\320\266\320\261\320\260:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Apollo", "\320\220\320\263\320\265\320\275\321\206\320\270\321\217 \320\277\320\276 \320\262\320\277\320\270\321\201\320\262\320\260\320\275\320\270\321\217\321\202\320\260: ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Apollo", "\320\235\320\236\321\202\320\260\321\200\320\270\320\260\320\273\320\275\320\260 \321\202\320\260\320\272\321\201\320\260: ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Apollo", "\320\224\320\224\320\241:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Apollo", "\320\236\320\261\321\211\320\276:", 0, QApplication::UnicodeUTF8));
        check_button->setText(QApplication::translate("Apollo", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Apollo: public Ui_Apollo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APOLLO_H
