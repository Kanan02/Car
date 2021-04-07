#include "Car.h"

Car::Car()
{
	year = 0;
	volume = 0;
	price = 0;
}

Car::Car(string name, int year, double volume, int price)
{
	this->name = name;
	this->year = year;
	this->volume = volume;
	this->price = price;
}

string Car::GetName() const
{
	return name;
}

int Car::GetYear() const
{
	return year;
}

double Car::GetVolume() const
{
	return volume;
}

int Car::GetPrice() const
{
	return price;
}

void Car::PrintCar()
{
	cout << "Name: " << name << endl;
	cout << "Year: " << year << endl;
	cout << "Volume: " << volume << " litres" << endl;
	cout << "Price: " << price << "$" << endl;
}

void AddCar(vector<Car>&cars,string name, int year, double volume, int price) {
	Car c{name,year,volume,price};
	cars.push_back(c);
}
void PrintCars(vector<Car>cars) {
	int i = 0;
	for (auto elem : cars) {
		cout << "\tCar " << i + 1 << ".\n";
		elem.PrintCar();
		cout << endl;
		i++;
	}
}
