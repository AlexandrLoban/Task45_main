#include "util.h"
#include "logic.h"

int main() {
	srand(time(NULL));
	const int SIZE = 20;

	int array[SIZE];

	init_random(array, SIZE, -6, 50);
	string array_string = convert(array, SIZE);
	print(array_string + "\n");

	print("amount of negative numbers in your array: "
		+ to_string(find_amount_negative_nums(array, SIZE)) + "\n");
	print("amount of positive numbers in your array: "
		+ to_string(find_amount_positive_nums(array, SIZE)) + "\n");
	print("amount of zero numbers in your array: "
		+ to_string(find_amount_zero_nums(array, SIZE)) + "\n");



	return 0;
}