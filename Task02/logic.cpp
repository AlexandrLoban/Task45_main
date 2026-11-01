#include "logic.h"

bool vector_is_ordered(int* array, int size) {
	
	bool increase = true;
	bool decrease = true;

	for (int i = 1; i < size; i++) {
		if (array[i] < array[i - 1]) {
			increase = false;
		}
		else if (array[i] > array[i - 1]) {
			decrease = false;
		}

	}
	
	return increase or decrease;
}