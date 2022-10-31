#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int red = 2, green = 5, brown = 8;
    double n_red = n * red, n_green = n * green, n_brown = n * brown;
    int ans = ceil(n_red / k) + ceil(n_green / k) + ceil(n_brown / k);
    // cout<<ceil(n_red/k)<<" "<<ceil(n_green/k)<<" "<<ceil(n_brown/k)<<endl;
    cout << ans << endl;
}