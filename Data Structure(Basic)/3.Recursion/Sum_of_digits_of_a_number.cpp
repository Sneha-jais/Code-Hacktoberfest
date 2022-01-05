
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
int sum=0;
while(n>0){
    int x=n%10;
    sum+=x;
    n=n/10;
}

cout<<sum;

    return 0;
}