// C++ code to demonstrate the working of
// iterator, begin() and end()
#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
	vector<int> ar = { 1, 2, 3, 4, 5 };
	
	// Declaring iterator to a vector
	vector<int>::iterator ptr;
	
	// Displaying vector elements using begin() and end()
	cout << "The vector elements are : ";
	for (ptr = ar.begin(); ptr != ar.end(); ptr++)
		cout << *ptr << " ";
		
		
	 vector<int> ar1 = { 1, 2, 3, 4, 5 };
      
    // Declaring iterator to a vector
	 vector<int>::iterator ptr1 = ar1.begin();
      
    // Using advance() to increment iterator position
    // points to 4
    advance(ptr1, 3);
      
    // Displaying iterator position
    cout <<endl<< "The position of iterator after advancing is : ";
    cout << *ptr1 << " ";
    vector<int> ar2 = { 1, 2, 3, 4, 5 };
      
    // Declaring iterators to a vector
    vector<int>::iterator ptr2 = ar2.begin();
    vector<int>::iterator ftr = ar2.end();
     
     
    // Using next() to return new iterator
    // points to 4
    auto it = next(ptr2, 3);
      
    // Using prev() to return new iterator
    // points to 3
    auto it1 = prev(ftr, 3);
      
    // Displaying iterator position
    cout <<endl<< "The position of new iterator using next() is : ";
    cout << *it << " ";
    cout << endl;
      
    // Displaying iterator position
    cout <<endl<< "The position of new iterator using prev()  is : ";
    cout << *it1 << " ";
    cout << endl;
    
    vector<int> ar3 = { 1, 2, 3, 4, 5 };
    vector<int> ar4 = {10, 20, 30}; 
      
    // Declaring iterator to a vector
    vector<int>::iterator ptr3 = ar3.begin();
     
    // Using advance to set position
    advance(ptr3, 3);
      
    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(ar4.begin(), ar4.end(), inserter(ar3,ptr3));
      
    // Displaying new vector elements
    cout <<endl<< "The new vector after inserting elements is : ";
    for (int &x : ar3) 
        cout << x << " ";
	return 0;	
}

