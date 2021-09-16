#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,h,x;
    string ans= "NO";
    cin>>n>>h>>x;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(ans=="NO"&&x+t>=h)
            ans="YES";
    }
    cout<<ans;
    return 0;
}