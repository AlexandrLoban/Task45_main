#include "util.h"

void print(string s) {
	cout << s;
}

string convert(int* array, int size) {
	string s = to_string(array[0]);

	for (int i = 1; i < size; i++) {

		s += " " + to_string(array[i]);
	}
	return s;
}

void init_array(int* array, int size, int min, int max) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % max + min;

	}

}