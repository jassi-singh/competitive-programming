#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin>>a;
        ll k = log2(a);
        k = pow(2,k)-1;
        ll ans = (k^a)*k;
        cout<<ans<<endl;
    }
    return 0;
}