#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    if (n & 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
