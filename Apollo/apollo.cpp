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
    //ui->info_text_box->setText(region_name);

    QHash<QString, Region_Info>::const_iterator i = all_regions_info.find(region_name);
    Region_Info selected_region = i.value();
    QString temp = selected_region.bank_account;// + "\n" + selected_region.percent;
    ui->info_text_box->setText(temp);


    //TODO: Za sega nqma da go vzemam v predvid //Bat nasko ?
    int check_type = ui->check_type->currentIndex();
    //QVariant v(check_type);
    //ui->info_text_box->setText(v.toString());

    //Proverqvame dali ob6tinata e vyv spisyka
    //  -ako e v spisyka izkaravme informaciq(Notepad)
    //  -ako ne e prompting
}
