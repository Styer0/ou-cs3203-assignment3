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

int main()
{
	vector <int> data;
	data.push_back(5);
	data.push_back(7);
	data.push_back(4);
	data.push_back(9);
	data.push_back(3);

	int sum = sumList(data);

	cout << sum << endl;

}
