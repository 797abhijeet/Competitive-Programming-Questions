#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll ans;

   
    
    if(v[0]!=-1 and v[n-1]!=-1){
        ans=abs(v[n-1]-v[0]);
    }
    else ans=0;

    vector<ll> temp = v;

    if (ans == 0)
    {
        if (temp[0] == -1 && temp[n - 1] == -1)
        {
            temp[0] = 0;
            temp[n - 1] = 0;
        }
        else if (temp[0] == -1 && temp[n - 1] != -1)
        {
            temp[0] = temp[n - 1];
        }
        else if (temp[0] != -1 && temp[n - 1] == -1)
        {
            temp[n - 1] = temp[0];
        }
    }

    for (int i = 0; i < n; i++)
        if (temp[i] == -1)
            temp[i] = 0;

    // Output in the same pattern
    cout << ans << "\n";

    for (int i = 0; i < n; i++)
    {
        if (i) cout << " ";
        cout << temp[i];
    }
    cout << "\n";
}

// --------------------- Main --------------------- //
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
