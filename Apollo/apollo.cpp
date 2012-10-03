#include "apollo.h"
#include "ui_apollo.h"

Apollo::Apollo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Apollo)
{
    ui->setupUi(this);
}

Apollo::~Apollo()
{
    delete ui;
}

void Apollo::OutputCheckButtonClicked()
{
    //TODO: all logic of the application must be implement here!
    ui->lineEdit->setText(tr("Test"));
}
