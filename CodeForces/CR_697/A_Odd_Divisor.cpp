#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
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
        ll n;
        cin>>n;
        double p=log2(n);
        if(p==(int)p)
        {
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;
    }
}