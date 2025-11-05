#include "MobileProvider.h"
#include "MobileException.h"

MobileProvider::MobileProvider(string name)
{
    this->name = name;
}

void MobileProvider::setName(string name)
{
    this->name = name;
}

string MobileProvider::getName() const
{
    return name;
}

void MobileProvider::addTariff(Tariff* obj)
{
    if (obj == nullptr)
    {
        throw new ObjException("Invaild pointer");
    }
    tariffs.push_back(obj);
}

void MobileProvider::showList() const
{
    if (tariffs.size()==0)
    {
        cout << "List is empty\n";
    }
    for (int i = 0; i < tariffs.size(); i++) {
        tariffs[i]->show();
        cout << endl;
    }
}
