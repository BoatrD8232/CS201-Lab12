// CS201L-Lab12b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Functions.h"

int main()
{
    ifstream inFile("input.txt");
    ofstream outFile("Report.txt");
    string line, word;
    int num;
    vector<int> nums;
    vector<string> words;

    outFile << "Welcome to the World of Recursion\n";
    while (getline(inFile, line)) {
        stringstream inss(line);
        words.clear();
        while (getline(inss, word, ',')) {
            words.push_back(word);
        }
        if (words.at(0) == "factorialR") {
            try {
                num = stoi(words.at(1));
                outFile << "The factorial of " << num << " is " <<  factorialR(num) << endl;
            }
            catch (invalid_argument) {
                outFile << "Error- factorial input invalid: " << words.at(1) << endl;
            }
        }

        else if (words.at(0) == "isPrimeR") {
            try {
                num = stoi(words.at(1));
                if (isPrimeR(num, 2)) {
                    outFile << num << " is prime" << endl;
                }
                else {
                    outFile << num << " is not prime" << endl;
                }
            }
            catch (invalid_argument) {
                outFile << "Error- prime number input invalid: " << words.at(1) << endl;
            }
        }

        else if (words.at(0) == "palindromeR") {
            if (palindromeR(words.at(1), 0, words.at(1).size() - 1)) {
                outFile << words.at(1) << " is a palindrome" << endl;
            }
            else {
                outFile << words.at(1) << " is not a palindrome" << endl;
            }
        }

        else if (words.at(0) == "sumR") {
            nums.clear();
            try {
                for (int i = 1; i < words.size(); ++i) {
                    nums.push_back(stoi(words.at(i)));
                }
                outFile << "The sum of ";
                for (int i = 0; i < nums.size(); ++i) {
                    outFile << nums.at(i) << " ";
                }
                outFile << " is ";
                outFile << sumR(nums, 0);
                outFile << endl;
            }
            catch (invalid_argument) {
                outFile << "Invalid number in: ";
                for (int i = 1; i < words.size(); ++i) {
                    outFile << words.at(i) << " ";
                }
                outFile << endl;
            }
        }

        else if (words.at(0) == "reverseStringR") {
            outFile << "The reverse of " << words.at(1) << " is ";
            reverseStringR(outFile, words.at(1));
            outFile << endl;
        }
    }
}

