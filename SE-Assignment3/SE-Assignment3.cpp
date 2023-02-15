// SE-Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int sumList(vector<int> data) {
	// Add all of the numbers in an array
	int sum = 0;
	for (int i = 0; i < data.size(); i++) {
		sum += data.at(i);
	}
	return sum;
}

int productList(vector<int> data) {
	// Multiply all the numbers in an array
	int product = 1;
	for (int i = 0; i < data.size(); i++) {
		product *= data.at(i);
	}
	return product;
}

vector<int> reversal(vector<int> data) {
	// reversing the order from the array
	vector<int> reverse;
	for (int i = data.size() - 1; i >= 0; --i) {
		reverse.push_back(data.at(i));
	}
	return reverse;
}
int main()
{
	vector <int> data;
	//data.push_back(5);
	//data.push_back(7);
	//data.push_back(4);
	//data.push_back(9);
	//data.push_back(3);
	int input;
	
	// User input
	while (cin >> input) {
		data.push_back(input);
	}
	// Call function
	vector<int> reverseData = reversal(data);
	int sum = sumList(data);
	int product = productList(data);

	cout << "Sum of the list: " << sum << endl;
	cout << "Product of the list: " << product << endl;

}
