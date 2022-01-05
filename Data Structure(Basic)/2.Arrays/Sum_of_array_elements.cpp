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

int sum=0;
for(int i=0; i<n; i++){
    sum+=arr[i];
    }
    cout<<sum;
    return 0;
}