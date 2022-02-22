#include<bits/stdc++.h>
using namespace std;
int main(){

int n,key;
cin>>n>>key;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
bool flag=false;
for(int i=0;i<n;i++){
    if(arr[i]==key)
flag=true;

}
if(flag==true)
cout<<"Element found\n";
else
cout<<"Element not found\n";

    return 0;
}
