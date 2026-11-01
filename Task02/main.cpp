#include "util.h"

int main() {
	int size;
	int array[DEFAULT_SIZE];

	do {
		system("cls");
		print("Input size of your array: ");
		cin >> size;
	} while (size <0 or size > DEFAULT_SIZE);

	print("Input elements: ");

	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	string s = "Your vector is ";
	s += vector_is_ordered(array, size) ? "sorted" : "unsorted";

	print(s + "\n");
	return 0;
}