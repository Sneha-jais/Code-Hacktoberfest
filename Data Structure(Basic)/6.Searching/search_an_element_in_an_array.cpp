#include<bits/stdc++.h>
using namespace std;
int main(){

int n,key;
cin>>n>>key;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
bool f=false;
for(int i=0;i<n;i++){
    //If element found then put the flag true.
    if(arr[i]==key)
      f=true;

}
    
if(f==true)
cout<<"Element found\n";
else
cout<<"Element not found\n";

    return 0;
}
