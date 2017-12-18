// Pairs with Positive Negative values.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printPairs(int arr[], int n)
{

	vector<int> v;

	// each element of array
	for (int i = 0; i < n; i++)

		// negative value check up
		// arr[i] from i+1 to n
		for (int j = i + 1; j < n; j++)

			// if absolute values are equal print pair
			if (abs(arr[i]) == abs(arr[j]))
				v.push_back(abs(arr[i]));

	// if size of vector is 0, therefore there is no
	// element with positive negative value, print "0"
	if (v.size() == 0)
		return;

	// sort the vector
	sort(v.begin(), v.end());

	// Print the pair with engative positive value.
	for (int i = 0; i < v.size(); i++)
		cout << -v[i] << " " << v[i] << endl;
	
}

int main()
{
	int arr[] = { 4, 8, 9 , -4, 1, -1, -8, -9 };

	int n = sizeof(arr) / sizeof(arr[0]);
	printPairs(arr, n);



    return 0;
}

