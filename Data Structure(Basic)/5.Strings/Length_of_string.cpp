#include <iostream>
using namespace std;
int main()
{
    char s[100];
    cin >> s;

    int i = 0, count = 0;
    while (s[i] != '\0')
    {

        count++;
        i++;
    }

    cout << count;
    return 0;
}