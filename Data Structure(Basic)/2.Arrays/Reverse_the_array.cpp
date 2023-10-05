#include<iostream>
using namespace std;
void rev(int arr[], int n){
    int low=0,high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}
int main(){

    int n;
    cout<<"enter number of elements in array\n";
    cin>>n;
    int arr[n];
cout<<"Enter elements of array\n";
for(int i=0; i<n; i++)
cin>>arr[i];

rev(arr,n);
return 0;

}
