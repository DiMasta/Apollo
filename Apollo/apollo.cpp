#include <QProcess>

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
    //TODO: all logic of the application must be implement here!
    //ui->lineEdit->setText(tr("Test"));

    //First we get the values from the UI elements(type(0,1,2); region(QString))
    QString region_name = ui->region_name->text();

    // tova ba4ka za imanea na latinica
    Region_Info cuurent_region_info = all_regions_info[region_name];
    QString region_bank_acc = cuurent_region_info.bank_account;
    double region_percent = cuurent_region_info.percent;

    QString reg_percent_str;
    reg_percent_str = reg_percent_str.setNum(region_percent);
    //ui->info_text_box->setText(reg_percent_str);

    //Running notepad
    QString notepad_path = "C:\\Windows\\notepad.exe";
    QStringList args;
    args << "C:\\Users\\Di_Masta\\Desktop\\test.txt";
    QProcess *notepad = new QProcess();
    notepad->start(notepad_path, args);

    //TODO: Za sega nqma da go vzemam v predvid //Bat nasko ?
    //int check_type = ui->check_type->currentIndex();
    //QVariant v(check_type);
    //ui->info_text_box->setText(v.toString());

    //Proverqvame dali ob6tinata e vyv spisyka
    //  -ako e v spisyka izkaravme informaciq(Notepad)
    //  -ako ne e prompting
}
