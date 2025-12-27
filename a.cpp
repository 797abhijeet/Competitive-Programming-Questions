#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   int g,c,l;
   cin>>g>>c>>l;
   vector<int>v={g,c,l};
   sort(v.begin(),v.end());

   int maxi=max({g,c,l});
   int mini=min({g,c,l});



   if(maxi-mini>=10){
    cout <<"check again"<<endl;
    
   }else{
    cout <<"final ";
    cout <<v[1]<<endl;
   }

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

   
        solve();

    return 0;
}
