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
int x, great=INT_MAX;
cout<<"Enter element for comparison \n";
cin>>x;

for(int i=0; i<n; i++){
    if(arr[i]>x){
    
great=min(arr[i],great);
    }
}
cout<<"Immidiate greater than "<<x<<" is "<<great;

return 0;
}