#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s, b;
    cin >> s >> b;
    auto k = 0;
    cin >> k;
    set<pair<int,int>> ans;
    for (int i = 0; i < s.length(); i++)
    {
        ll mod = 1e9+7;
        ll h1=0,h2=0;
        ll p1=31,p2=29;
        ll pow1=1,pow2=1;

        int sum = 0;
        for (int j = i; j < s.length(); j++)
        {
            if (b[s[j] - 'a'] == '0')
                sum++;
            if (sum > k)
                break;
            h1 = (h1 + (s[j]-'a'+1)*pow1)%mod;
            h2 = (h2 + (s[j]-'a'+1)*pow2)%mod;

            pow1*=p1%mod;
            pow2*=p2%mod;
            
            ans.insert(make_pair(h1,h2));
        }
    }
    cout << ans.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}