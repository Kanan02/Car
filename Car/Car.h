#pragma once

#include <string>
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Car
{
private:
	string name;
	int year;
	double volume;
	int price;
public:
	Car();
	Car(string name,int year,double volume,int price);
	string GetName() const;
	int GetYear() const;
	double GetVolume() const;
	int GetPrice() const ;
	void PrintCar();

};

void AddCar(vector<Car>& cars, string name, int year, double volume, int price);
void PrintCars(vector<Car>cars);
