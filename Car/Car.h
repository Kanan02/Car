#pragma once

#include <string>
class Car
{
private:
	std::string name;
	int year;
	double volume;
	int price;
public:
	Car();
	Car(std::string name,int year,double volume,int price);
	void setName();
};

