#include "MinutesTariff.h"
#include "MobileException.h"

MinutesTariff::MinutesTariff()
{
    price = 1.0f;
}

MinutesTariff::MinutesTariff(std::string name, float price):Tariff(name)
{
    setPrice(price);
    //this->price = price;
}

void MinutesTariff::setPrice(float price)
{
    if (price < 0)
    {
        throw new PriceException("Not positive number", price);
    }
    this->price = price;
}

float MinutesTariff::getPrice() const
{
    return price;
}

float MinutesTariff::calcCost(int seconds) const
{
    if (seconds <= 0)
    {
        throw new SecondException("Not positive number", seconds);
    }
    if (price < 0)
    {
        throw new PriceException("Not positive number", price);
    }
    return (seconds /60)*price;
}

void MinutesTariff::show() const
{
    cout << "Minutes Tariff\n";
    Tariff::show();
    cout << "Price for minutes: " << price << endl;
}
