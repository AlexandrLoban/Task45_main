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

	string s = "Vector is a ";
	s+= vector_is_mirror(array, size) ? "mirror" : "non-mirror";
	print(s + "\n");

	return 0;
}