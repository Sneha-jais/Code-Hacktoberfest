/* :)
Linear search using recursion.
*/

#include <iostream>
using namespace std;

//function for linear search

int linear_search(int arr[],int n,int key,int start){ 
 if(start<=n-1){
 if(arr[start]==key)
 return start;
 else
 return linear_search(arr,n,key,start+1);
 }
 return -1;
}

int main()
{
int n,key;
cout<<"Enter number of elements in array:\n";
cin>>n;
cout<<"Enter elements of the array:\n";
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
}
cout<<"Enter the element which you want to search:\n";
cin>>key;
 
 //calling the function
int ans=linear_search(arr,n,key,0);
cout<<"The index of desired element is: "<<ans<<endl;
 return 0;
}
