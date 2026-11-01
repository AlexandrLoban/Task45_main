#include "logic.h"

bool vector_is_mirror(int* array, int size) {
	
	int i = 0;
	int q = size - 1;
	
	while (i < (size / 2)) {
		if (array[i] != array[q]) {
			return false;
		}
		i++;
		q--;

	}
	return true;
}