#include <iostream>
using namespace std;
int fact(int x)
{

    if (x == 0 || x == 1)
        return 1;
    else
        return x * fact(x - 1);
}
int main()
{
    int n, r;
    cout << "Enter number n\n";
    cin >> n;
    cout << "Enter number r\n";
    cin >> r;

    if (n < r)
    {
        cout << "Invalid Input, n should be greater than r\n";
    }
    else
    {
        cout << "Answer will be:\n";
        int ans = fact(n) / (fact(r) * fact(n - r));
        cout << ans;
    }
    return 0;
}