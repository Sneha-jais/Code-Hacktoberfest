

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number\n";
cin>>n;

    int count=0;

while(n>0){

    int x=n%10;
    n=n/10;
    count++;
}

cout<<count;
return 0;
}