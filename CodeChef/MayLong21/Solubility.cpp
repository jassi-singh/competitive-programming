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
        int x,a,b;
        cin>>x>>a>>b;
        cout<<(a + (100-x)*b)*10<<endl;
    }
    return 0;
}