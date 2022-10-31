//https://codeforces.com/contest/987/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string srr[n], first[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"}, second[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
    for (int i = 0; i < n; i++)
    {
        cin >> srr[i];
    }

    int pr[6] = {0};
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            if (second[i] == srr[j])
            {
                pr[i]++;
                break;
            }
        }
    }

    cout << 6 - n << endl;
    for (int i = 0; i < 6; i++)
    {
        // cout << pr[i] << " ";
        if (pr[i] == 0)
        {
            cout << first[i] << endl;
        }
    }
    cout << endl;
}
