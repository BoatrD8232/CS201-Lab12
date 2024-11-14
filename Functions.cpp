#include "Functions.h"

long factorialR(long value) {
	if (value < 0) {
		throw invalid_argument("Negative number");
	}
	if (value == 1 || value == 0) {
		return 1;
	}
	return value * factorialR(value - 1);
}

bool isPrimeR(int value, int n) {
	if (n > sqrt(value)) {
		return true;
	}
	if (value % n == 0) {
		return false;
	}
	return isPrimeR(value, n + 1);
}

int sumR(vector<int> nums, int pos) {
	if (pos == nums.size() - 1) {
		return nums.at(pos);
	}
	return nums.at(pos) + sumR(nums, pos + 1);
}

bool palindromeR(string str, int left, int right) {
	if (left >= right) {
		return true;
	}
	if (str.at(left) != str.at(right)) {
		return false;
	}
	return palindromeR(str, left + 1, right - 1);
}

void reverseStringR(ofstream& out, string str) {
	if (str.size() < 1) {
		return;
	}
	reverseStringR(out, str.substr(1));
	out << str.at(0);
}