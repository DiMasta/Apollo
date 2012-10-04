#include "apollo.h"

void Apollo::fill_regions_info()
{
    all_regions_info.reserve(BG_REGIONS_COUNT);

    QString name;
    Region_Info buff;

    //**********************************************

    name                = "Дулово";
    buff.bank_account   = "dsdwd55d5w54d5w4";
    buff.percent        = 4.0;
    all_regions_info.insert(name, buff);

    //**********************************************

    name                = "Правец";
    buff.bank_account   = "dsdwd55d5dre5545454";
    buff.percent        = 3.1;
    all_regions_info.insert(name, buff);
}
