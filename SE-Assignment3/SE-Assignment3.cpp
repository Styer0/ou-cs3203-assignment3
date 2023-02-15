// SE-Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int sumList(vector<int> data) {
	// (1) Add all of the numbers in an array
	int sum = 0;
	for (int i = 0; i < data.size(); i++) {
		sum += data.at(i);
	}
	return sum;
}

int productList(vector<int> data) {
	// (2) Multiply all the numbers in an array
	int product = 1;
	for (int i = 0; i < data.size(); i++) {
		product *= data.at(i);
	}
	return product;
}

vector<int> reversal(vector<int> data) {
	// (5) reversing the order from the array
	vector<int> reverse;
	for (int i = data.size() - 1; i >= 0; --i) {
		reverse.push_back(data.at(i));
	}
	return reverse;
}
int main()
{
	// Main function
	vector <int> data;
	int input;
	
	// User input
	while (cin >> input) {
		data.push_back(input);
	}
	// Call functions
	int sum = sumList(data);
	int product = productList(data);
	vector<int> reverseData = reversal(data);

	// print out to console
	cout << "Sum of the list: " << sum << endl;
	cout << "Product of the list: " << product << endl;

	// (6) print out array
	for (int i = 0; i < reverseData.size(); i++) {
		cout << reverseData.at(i) << " ";
	}
	cout << endl;
}
