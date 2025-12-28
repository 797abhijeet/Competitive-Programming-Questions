#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    // cout << "debug1" << endl;
    sort(v.begin(), v.end());
    if (v[0] == v[n - 1])
    {
        cout << "NO" << endl;
        return ;
    }
    cout << "YES" << endl;
    int j = v.size() - 1;
    int i = 0;
    vector<int> ans;

    while (i < j)
    {
        // cout <<"HI"<<endl;
        ans.push_back(v[j--]);
        ans.push_back(v[i++]);
    }
    if(n&1)
    {
        ans.push_back(v[i]);
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
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
