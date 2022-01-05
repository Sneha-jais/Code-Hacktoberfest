#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of elements in array\n";
cin>>n;
int arr[n];
cout<<"Enter elements of array\n";
for(int i=0;i<n; i++)
cin>>arr[i];
int x,small=INT_MIN;
cout<<"Enter element for comparison \n";
cin>>x;

for(int i=0; i<n; i++){
    if(arr[i]<x){
    
small=max(arr[i],small);
    }
}
cout<<"Immidiate smaller than "<<x<<" is "<<small;

return 0;
}