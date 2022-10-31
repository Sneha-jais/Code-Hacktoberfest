#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int count[arr[n - 1] + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int ans = 0;
    for (int i = 0; i <= arr[n - 1]; i++)
    {
        if (i != 0 && count[i] != 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
}