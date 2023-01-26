#include <iostream>
#include <vector>
#include <numeric>
/* String functions section */
// divides an input integer by 2 until it is impossible to do so, then returns the final number.
// (16 = 2 * 2 * 2 * 2 * 1 -> 1, 7 -> 7, 26 = 2 * 13 -> 13, 52 = 2 * 2 * 13 -> 13)
int RemoveTwos(int original) {
	while (original % 2 == 0) {
		original = original / 2;
	}
	return original;
}

// Sums all numbers in a vector and returns the resulting value
int Sum(std::vector<int> nums){
	return accumulate(nums.begin(), nums.end(), 0);;
}

// returns -1 if the number is negative and 1 if positive
double Sign(double num) {
	if (num > 0) {
		return 1;
	} else if (num < 0) {
		return -1;
	} else {
		return 0;
	}
}