#include <iostream>
#pragma once
using namespace std;

class Goods
{
private:
	float first;
	unsigned int second;
public:
	int get_first() const { return first; };
	int get_second() const { return second; };
	void set_first(float value);
	void set_second(unsigned int value);

	bool init(float x, int y);
	void display() const;
	void read();

	double cost(float c);

};
