/*
Given an unsorted array of positive integers, find the number of triangles that can be formed with three different array elements as three sides of triangles. 
For a triangle to be possible from 3 values, the sum of any of the two values (or sides) must be greater than the third value (or third side). 
Input: arr= {4, 6, 3, 7}
Output: 3
Explanation: There are three triangles 
possible {3, 4, 6}, {4, 6, 7} and {3, 6, 7}. 
Note that {3, 4, 7} is not a possible triangle.  
*/


#include <bits/stdc++.h>
using namespace std;

int findNumberOfTriangles(int arr[], int n)
{

	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {

			for (int k = j + 1; k < n; k++)

				if (arr[i] + arr[j] > arr[k]
					&& arr[i] + arr[k] > arr[j]
					&& arr[k] + arr[j] > arr[i])
					count++;
		}
	}
	return count;
}


int main()
{

int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  
	cout << "Total number of triangles possible is "
		<< findNumberOfTriangles(arr, size);
	return 0;
}

