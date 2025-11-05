#include "Tariff.h"
#include "MobileException.h"
Tariff::Tariff()
{
    name = "none";

}

Tariff::Tariff(std::string name)
{
    //this->name = name;
    setName(name);
}

void Tariff::setName(std::string name)
{
    if (name.size()==0)
    {
        throw new NameException("Name is empty", "Empty");
    }
    if (name.find("XXX") != -1)
    {
        throw new NameException("Name is bad", name);
    }
    this->name = name;

}

std::string Tariff::getName() const
{
    return name;
}


void Tariff::show() const
{
    cout << "Name tariff: " << name << endl;
}
