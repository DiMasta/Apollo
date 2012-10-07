#ifndef APOLLO_H
#define APOLLO_H

#include <QMainWindow>
#include <QHash>

#include "region_info.h"

namespace Ui {
class Apollo;
}

#define BG_REGIONS_COUNT 241

class Apollo : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Apollo(QWidget *parent = 0);
    ~Apollo();

public slots:
    void OutputCheckButtonClicked();
    
private:
    Ui::Apollo *ui;

    QHash<QString, Region_Info> all_regions_info;

    void fill_regions_info();
};

#endif // APOLLO_H
