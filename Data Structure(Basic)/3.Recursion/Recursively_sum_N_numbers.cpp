#include<iostream>
using namespace std;

int sum=0;

int fun(int n){
if(n>=1)
sum=fun(n-1)+n;
return sum;
}

int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
cout<<fun(n);

    return 0;
}