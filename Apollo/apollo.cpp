#include <QProcess>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QMessageBox>

#include "apollo.h"
#include "ui_apollo.h"

Apollo::Apollo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Apollo)
{
    ui->setupUi(this);

    //Initializing information for the regions
    fill_regions_info();
}

Apollo::~Apollo()
{
    delete ui;
}

void Apollo::OutputCheckButtonClicked()
{
    //TODO:
    //  - saving the chosen region frotm the user
    //  - getting windows path for notepad
    //  - kirilicata (translation tools)
    //  - informaciqta pylna
    //  - updating info
    //  - good installation
    //  - licensing

    //First we get the values from the UI elements(type(0,1,2); region(QString))
    QString region_name = ui->region_name->text();

    //TODO: Za sega nqma da go vzemam v predvid //Bat nasko ?
    //int check_type = ui->check_type->currentIndex();
    //QVariant v(check_type);
    //ui->info_text_box->setText(v.toString());

    // Try to get the region information for the user's region
    QHash<QString, Region_Info>::iterator i = all_regions_info.find(region_name);

    // If the region is not listed in all_regions_info,
    // prompt the user there is no such region
    if(i == all_regions_info.end())
    {
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setText("Sorry, but there is no such region!");
        msgBox.exec();
        return;
    }

    // If there is such region get the information from the QHash
    Region_Info value = i.value();
    QString region_bank_acc = value.bank_account;
    double region_percent = value.percent;

    // Getting the user's temp folder
    QString temp_folder = QDir::tempPath();
    QString out_text_file = temp_folder + "/apollo.txt";

    // Creating the output file with the info for the chosen region
    QFile file(out_text_file);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "Region: \t" << region_name << "\n\n";
    out << "Bank account: \t"<< region_bank_acc << "\n";
    out << "Percent: \t"<< region_percent << "\n\n";
    QDateTime date = QDateTime::currentDateTime();
    out << "Date: \t\t" << date.toString();
    file.close();

    //Running notepad with the gfreated file
    QString notepad_path = "C:\\Windows\\notepad.exe"; //TODO: more convinient way to get notepad path
    QStringList args;
    args << out_text_file;
    QProcess *notepad = new QProcess();
    notepad->start(notepad_path, args);
}
