#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n){
    bool swapped;
    for(int i=0; i<n-1; i++){
        swapped=false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

}

int main(){
int n;
cout<<"Enter number of elements in array\n";
cin>>n;
int arr[n];
cout<<"Enter elements of array\n";
for(int i=0; i<n; i++)
cin>>arr[i];

bubble(arr,n);


    return 0;
}