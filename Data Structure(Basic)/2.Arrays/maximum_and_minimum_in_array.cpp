#include<iostream>
using namespace std;
void minInArray(int arr[], int n){
    int minimum=arr[0];
    for(int i=0; i<n; i++){
minimum=min(minimum,arr[i]);
    }
    cout<<"\nMinimum element in given array "<<minimum;
}
void maxInArray(int arr[], int n){
    int maximum=arr[0];
    for(int i=0; i<n; i++){
maximum=max(maximum,arr[i]);
    }
    cout<<"\nMaximum element in given array "<<maximum;
}

int main(){
int n;
cout<<"Enter number of elements in array\n";
cin>>n;
int arr[n];
cout<<"Enter elements of array\n";
for(int i=0;i<n; i++)
cin>>arr[i];

minInArray(arr,n);
maxInArray(arr,n);
return 0;
}