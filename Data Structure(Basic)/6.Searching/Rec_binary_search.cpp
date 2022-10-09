#include <iostream>
using namespace std;

int binary_search(int arr[], int n,int x,int start,int end){
 if(start<=end){
 int mid=(start+end)/2;
 if(arr[mid]==x)
 return mid;
 else if(arr[mid]<x){
 return binary_search(arr,n,x,mid+1,end);
 }
 else
 return binary_search(arr,n,x,start,mid-1);
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
int ans=binary_search(arr,n,key,0,n-1);
cout<<"The index of desired element is: "<<ans<<endl;
 return 0;
}
