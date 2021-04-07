#include "Car.h"


void main() {
	vector<Car> cars;
	Car c ;
	cars.insert(cars.begin(), c);
	int ch=0;
	string name;
	int year, price,num;
	double volume;
	bool isReal = false;
	while (ch!=8) {
		cout << "Select the menu:\n1.Add Car\t2.Delete Car\t3.Show all\t4.Sort by year\n5.Sort by price\t6.Find by name\t7.Find by price\t8.Exit\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			system("cls");
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter year : ";
			cin >> year;
			cout << "Enter volume: ";
			cin >> volume;
			cout << "Enter price: ";
			cin >> price;
			AddCar(cars,name, year, volume, price);
			break;
		case 2:
			system("cls");
			cout << "Enter the number of the car that you want to delete: ";
			cin >> num;
			cars.erase(cars.begin()+num-1);	
			break;
		case 3:
			system("cls");
			PrintCars(cars);
			break;
		case 4:
			system("cls");
			sort(cars.begin(), cars.end(), [](const Car& a, const Car& b) {return a.GetYear() < b.GetYear(); });
			cout << "Done!\n";

			break;
		case 5:
			system("cls");
			sort(cars.begin(), cars.end(), [](const Car& a, const Car& b) {return a.GetPrice() < b.GetPrice(); });
			cout << "Done!\n";
			break;
		case 6:
			system("cls");
			cout << "Enter name: ";
			cin >> name;
			isReal = false;
			for (auto elem : cars) {
				if (name == elem.GetName()) {
					isReal = true;
					elem.PrintCar();
					cout << endl;
				}
			}
			if (!isReal) {
				cout << "There is no car with that name!\n";
			}
			break;
		case 7:
			system("cls");
			cout << "Enter price: ";
			cin >> price;
			isReal = false;
			for (auto elem : cars) {
				if (price == elem.GetPrice()) {
					isReal = true;
					elem.PrintCar();
					cout << endl;
				}
			}
			if (!isReal) {
				cout << "There is no car with such price!\n";
			}
			break;
			break;
		case 8:
			break;
		default:
			cout << "Wrong input!\n";
			break;
		}

	}
}