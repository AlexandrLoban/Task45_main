#include "logic.h"

int find_amount_negative_nums(int* array, int size) {
	int amount = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0) {
			amount++;
		}
	}

	return amount;
}

int find_amount_positive_nums(int* array, int size) {
	int amount = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] > 0) {
			amount++;
		}
	}

	return amount;
}

int find_amount_zero_nums(int* array, int size) {
	int amount = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0) {
			amount++;
		}
	}

	return amount;
}

