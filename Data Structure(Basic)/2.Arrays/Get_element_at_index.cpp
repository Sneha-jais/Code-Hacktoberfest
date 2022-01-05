#include <iostream>
using namespace std;
int main(){

    int n;
        cout<<"Enter number of elements in array\n";
    cin>>n;
    int arr[n];
      cout<<"Enter elements of array\n";
    for(int i=0; i<n;i++)
    cin>>arr[i];

    int x;
    cout<<"Enter index number of element\n";
    cin>>x;
    cout<<"Element at index "<<x<<" is\n";
    cout<<arr[x];
    return 0;
}