#include "Goods.h"

void Goods::set_first(float value)
{
	first = value;
}

void Goods::set_second(unsigned int value)
{
	second = value;
}
bool Goods::init(float x, int y)
{
	if (x > 0 && y > 0)
	{
		first = x;
		second = y;
		return true;
	}
	else
		cout << "error!" << endl;
		return false;
};

void Goods::display() const
{
	cout << endl;
	cout << "Prise = " << first << endl;
	cout << "Number = " << second << endl;
};

void Goods::read()
{
	float x;
	int y;
	do {
		cout << "Prise = ";
		cin >> x;
		cout << "Number = ";
		cin >> y;
	} while (!init(x, y));

};
double Goods::cost(float c)
{
	 c = first * second;
	 cout << "Summa = " << c << endl;
};
