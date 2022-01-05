#include<iostream>
using namespace std;
void fun(int x){
  if(x>1)
fun(x-1);
cout<<x<<" ";
}
int main(){
int n;
cout<<"Enter number\n";
cin>>n;

fun(n);

    return 0;
}