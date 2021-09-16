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
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        sort(a.begin(),a.end());
        cout<<2*(a[n-1]-a[0])<<endl;
    }
    return 0;
}