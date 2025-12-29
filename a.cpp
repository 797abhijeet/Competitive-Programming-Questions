#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    long long a, b, n;
    cin >> a >> b >> n;
    vector<long long> v(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    long long sum = b;

    for (auto it : v)
    {
        sum += min(it, a - 1);
        //    cout <<sum<<endl;
    }
    cout << sum << endl;
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
