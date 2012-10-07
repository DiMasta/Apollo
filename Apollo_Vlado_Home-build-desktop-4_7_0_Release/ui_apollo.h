/********************************************************************************
** Form generated from reading UI file 'apollo.ui'
**
** Created: Sun Oct 7 12:10:39 2012
**      by: Qt User Interface Compiler version 4.7.0
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
    QVBoxLayout *verticalLayout;
    QTextBrowser *info_text_box;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *type_label;
    QSpacerItem *horizontalSpacer;
    QComboBox *check_type;
    QHBoxLayout *horizontalLayout_2;
    QLabel *region_label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *region_name;
    QSpacerItem *verticalSpacer;
    QPushButton *check_button;

    void setupUi(QMainWindow *Apollo)
    {
        if (Apollo->objectName().isEmpty())
            Apollo->setObjectName(QString::fromUtf8("Apollo"));
        Apollo->resize(268, 317);
        centralWidget = new QWidget(Apollo);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        info_text_box = new QTextBrowser(centralWidget);
        info_text_box->setObjectName(QString::fromUtf8("info_text_box"));

        verticalLayout->addWidget(info_text_box);

        verticalSpacer_2 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

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


        verticalLayout->addLayout(horizontalLayout);

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

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        check_button = new QPushButton(centralWidget);
        check_button->setObjectName(QString::fromUtf8("check_button"));

        verticalLayout->addWidget(check_button);

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
         << QApplication::translate("Apollo", "\320\234\320\237\320\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Apollo", "\320\230\320\274\320\276\321\202", 0, QApplication::UnicodeUTF8)
        );
        region_label->setText(QApplication::translate("Apollo", "\320\236\320\261\321\211\320\270\320\275\320\260:", 0, QApplication::UnicodeUTF8));
        check_button->setText(QApplication::translate("Apollo", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Apollo: public Ui_Apollo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APOLLO_H
