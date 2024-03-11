#include <iostream>
#include <ctime>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);
int find_richest(int** prices, int* cars, int length);

int main() {
	srand(time(NULL));

	int count_showroom = 4;
	string* names = new string[count_showroom];

	int* cars = new int[count_showroom];

	for (int i = 0; i < count_showroom; i++)
	{
		do {
			system("cls");
			cout << "Input the name of showroom: ";
			cin >> *(names + i);
			cout << "Count of cars in " << *(names + i) << ": ";
			cin >> *(cars + i);
		} while (*(cars + i) <= 0);
	}

	int** prices = new int* [count_showroom];

	for (int i = 0; i < count_showroom; i++)
	{
		*(prices + i) = new int[*(cars + i)];
	}

	for (int i = 0; i < count_showroom; i++)
	{
		random_init(*(prices + i), *(cars + i), 10, 1000);
	}

	string msg = "";

	for (size_t i = 0; i < count_showroom; i++)
	{
		msg += output(*(prices + i), *(cars + i)) + "\n";
	}

	cout << endl << msg;
	cout << "Richest: " << find_richest(prices, cars, count_showroom);

	for (int i = 0; i < count_showroom; i++)
	{
		delete[]*(prices + i);
	}

	delete[] prices;
	delete[] cars;

	return 0;
}

