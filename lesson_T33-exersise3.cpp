#include "MinutesTariff.h"
#include "MobileProvider.h"
#include "SecondsTariff.h"
#include "Tariff.h"
#include "MobileException.h"
int main()
{
	MobileProvider Vodafone("Vodafone");
	while (true)
	{
		try {
			Tariff* obj = nullptr;
			int user = 0;
			cout << "1 - SecondsTariff, 2 - MinutesTariff\n";
			cin >> user;
			if (user == 1)
			{
				obj = new SecondsTariff("Day XXX", 0.01);
			}
			else if (user == 2)
			{
				obj = new MinutesTariff("Night", 0.01);
			}
			Vodafone.addTariff(obj);
			Vodafone.showList();
		}
		catch (MobileException* except)
		{
			cout << except->showMessage() << endl;
			delete except;
		}
		
	}
	
}
