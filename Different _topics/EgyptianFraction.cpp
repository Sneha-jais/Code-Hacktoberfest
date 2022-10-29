#include <bits/stdc++.h>
using namespace std;
void egyptianFraction(int n, int d){
    if (d == 0 || n == 0)
    return;
    if(d%n == 0){
        cout<<"1/"<<d/n;
        return;
    }
    if(n%d == 0){
        cout<<n/d;
        return;
    }
    if (n>d){
        cout<<n/d<<" + ";
        egyptianFraction(n%d, d);
        return;
    }
    int x = d/n+1;
    cout<<"1/"<<x<<" + ";
    egyptianFraction(n*x-d, d*x);
}
int main(){
    int n, d;
    cout<<"Enter the numerator of fraction: ";
    cin>>n;
    cout<<"Enter the denominator of fraction: ";
    cin>>d;
    cout<<"Egyptian Fraction representation of "<<n<<"/"<<d<<" is"<<endl;
    egyptianFraction(n, d);
    return 0;
}
