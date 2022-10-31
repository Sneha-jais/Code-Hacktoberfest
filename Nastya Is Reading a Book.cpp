#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n], e[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        cin >> e[i];
    }
    int k;
    cin >> k;
    int completed = 0;;
    for (int i = 0; i < n; i++)
    {
        if (k <= e[i])
        {
            completed = i;
            break;
        }
    }
    cout << n - completed << endl;
}