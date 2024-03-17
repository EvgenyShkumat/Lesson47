int find_sum(int* prices, int length) {
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum += *(prices + i);
	}

	return sum;
}

int find_richest(int** prices, int* cars, int length) {
	int max_index = 0;

	for(int i = 0; i < length; i++){
		int total = find_sum(*(prices + i), *(cars + i));

		if(total > find_sum(*(prices + max_index), *(length + max_index))){
			max_index = i;
		}
	}
	return max_index;
}
