#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    // table 
    // 0 0 0 
    // 1 0 1 
    // 0 1 1 
    // 1 1 0



    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n % 2 == 0)
    {
        int x = 0;
        for (auto it : v)
        {
            x ^= it;
        }
        if (x == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        int x = 0;
        for (auto it : v)
        {
            D
                x ^= it;
        }
        cout << x << endl;
    }
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
