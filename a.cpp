#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a, b;
    cin >> a >> b;
    int k1, k2;
    cin >> k1 >> k2;
    int q1, q2;
    cin >> q1 >> q2;

    int dx[] = {-1, 1, -1, 1};
    int dy[] = {-1, -1, 1, 1};

    set<pair<int, int>> sk, sq;

    for (int i = 0; i < 4; i++)

    {
        sk.insert({k1 + dx[i] * a, k2 + dy[i] * b});
        sk.insert({k1 + dx[i] * b, k2 + dy[i] * a});

        sq.insert({q1 + dx[i] * a, q2 + dy[i] * b});
        sq.insert({q1 + dx[i] * b, q2 + dy[i] * a});
    }

    int ans = 0;
    for (auto it : sk)
    {
        if (sq.find(it) != sq.end())
        {
            ans++;
        }
    }
    cout << ans << endl;
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
