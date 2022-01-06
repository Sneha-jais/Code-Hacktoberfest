
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    int temp = n;
    int rev = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }
    if (temp == rev)
        cout << "Number is palindrome\n";
    else
        cout << "Number is not palindrome\n";

    return 0;
}