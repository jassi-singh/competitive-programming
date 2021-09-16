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
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        cout<<a/x+b/y<<endl;
    }
    return 0;
}