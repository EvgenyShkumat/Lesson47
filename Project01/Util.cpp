#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void random_init(int* vector, int size, int min, int max) {
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		*(vector + i) = (rand() % (max - min + 1) + min) * 100;
	}
}

string output(int* vector, int size) {
	string msg = "";

	for (int i = 0; i < size; i++)
	{
		msg += to_string(*(vector + i)) + " ";
	}

	return msg;
}

