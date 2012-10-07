#include "apollo.h"

// Information for all regions in Bulgaria

void Apollo::fill_regions_info()
{
    all_regions_info.reserve(BG_REGIONS_COUNT);

    QString name;
    Region_Info buff;

    //**********************************************

    name                = tr("Дулово");
    buff.bank_account   = "dsdwd55d5w54d5w4";
    buff.percent        = 4.0;
    all_regions_info.insert(name, buff);

    //**********************************************

    name                = "Dulovo";
    buff.bank_account   = "DUlovo_bank::4444444444444";
    buff.percent        = 4.0;
    all_regions_info.insert(name, buff);

    //**********************************************

    name                = "Правец";
    buff.bank_account   = "dsdwd55d5dre5545454";
    buff.percent        = 2.12;
    all_regions_info.insert(name, buff);

    //**********************************************

    name                = "Pravec";
    buff.bank_account   = "PRavec::sdwswqes:e4224";
    buff.percent        = 2.12;
    all_regions_info.insert(name, buff);

    //**********************************************

    name                = "Kneja";
    buff.bank_account   = "Kneja::banka:e4224:sawssd3";
    buff.percent        = 6.72;
    all_regions_info.insert(name, buff);
}
