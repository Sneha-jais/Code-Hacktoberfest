
#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){

static int i=0;
if(i==n){
return;
}
cout<<arr[i]<<" ";
i++;

print(arr,n);
}


int main(){
int n;
cout<<"Enter number of elements in array\n";
cin>>n;
int arr[n];
cout<<"Enter elements of array\n";
for(int i=0; i<n;i++)
cin>>arr[i];

print(arr,n);
return 0;

}