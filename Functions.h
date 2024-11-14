#include <iostream>
#include <math.h> 
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;
#pragma once
// Pre- takes in a value
// Post- returns the factorial of that value
long factorialR(long value);

// Pre- takes in a value and a number(initially 2)
// Post- outputs true if that value is prime.
bool isPrimeR(int value, int n);

//Pre- takes in a vector of int and a position(initially 0)
//Post- returns the sum of the vector
int sumR(vector<int> nums, int pos);

//Pre- takes in a string, a left and right position (initially 0, and str.size() - 1 respectively)
//Post- outputs true if the string is a palindrome
bool palindromeR(string str, int left, int right);

//Pre- takes in an output stream and a string.
//Post- outputs the string in reverse.
void reverseStringR(ofstream& out, string str);
