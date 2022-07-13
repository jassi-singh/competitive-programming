#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        map<int,int> mp;
        int cnt = 0;
        for(char c:s){
            if(mp[c]==0) cnt+=2;
            else cnt++;
            mp[c]++;
        }
        cout<<cnt<<endl;
    }
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}