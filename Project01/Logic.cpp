int find_sum(int* prices, int length) {
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum += *(prices + i);
	}

	return sum;
}

int find_richest(int** prices, int* cars, int length) {
	int* sums = new  int[length];

	for (int i = 0; i < length; i++)
	{
		*(sums + i) = find_sum(*(prices + i), *(cars + i));
	}

	int max = *sums;
	int index = 0;

	for (int i = 1; i < length; i++)
	{
		if (*(sums + i) > max) {
			max = *(sums + i);
			index = i;
		}
	}

	return index;
}