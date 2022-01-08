#include<iostream>
using namespace std;

void ins(int arr[], int n){
     
     for(int i=1; i<n; i++){
int key=arr[i];
int j=i-1;
while(j>=0 && arr[j]>key){
    arr[j+1]=arr[j];
    j--;
}
arr[j+1]=key;
     }

     for(int i=0; i<n; i++)\
     cout<<arr[i]<<" ";


}
int main(){

    int n;
    cout << "Enter number of elements in array\n";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ins(arr, n);

    return 0;
}