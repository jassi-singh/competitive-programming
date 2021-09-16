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
        int n,ans=0;
        cin>>n;
        vector<int> j(n),pos(n);
        map<int,pair<int,int>>mp;
        for(int i=0;i<n;i++)
        {
            int w;
            cin>>w;
            pos[w-1]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            cin>>j[i];
        }
        for(int i=0;i<n;i++)
        {
            mp[i+1]=make_pair(pos[i],j[pos[i]-1]);
        }
        int i=2;
        while(i!=n+1)
        {
            int pos_r = mp[i-1].first;
            int pos_l = mp[i].first;
            int jp_r = mp[i-1].second;
            int jp_l = mp[i].second;
            if(pos_r>=pos_l)
            {
                mp[i] = make_pair(pos_l+jp_l,jp_l);
                ans++;
            }else 
                i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}