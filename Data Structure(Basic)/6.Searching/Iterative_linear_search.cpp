#include <iostream>
using namespace std;
int linear_search(int arr[],int n,int key){
 for(int i=0;i<n;i++){
 if(arr[i]==key){
 return i;
 }
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
  
int ans=linear_search(arr,n,key);
  
cout<<"The index of desired element is: "<<ans<<endl;
  
 return 0; }
