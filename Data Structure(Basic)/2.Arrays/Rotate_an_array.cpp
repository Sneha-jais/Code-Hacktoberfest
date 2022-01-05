#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter number of elements in array\n";
cin>>n;
int arr[n];
cout<<"Enter elements of array\n";
for(int i=0; i<n; i++)
cin>>arr[i];

int temp=arr[0];
for(int i=0; i<n; i++){
arr[i]=arr[i+1];
}
arr[n-1]=temp;
for(int i=0; i<n;i++)
cout<<arr[i]<<" ";

    return 0;
}