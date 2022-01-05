#include<iostream>
using namespace std;
int main(){
    int n;
      cout<<"Enter number of elements of array\n";
      cin>>n;
      int arr[n];
        cout<<"Enter elements of array\n";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int x,count=0;

        cout<<"Enter element for comparison\n";
        cin>>x;
for(int i=0; i<n; i++){
    if(arr[i]<x)
    count++;
}
cout<<count;
return 0;

}