#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        vector<int> e(s.length(),-1),f(s.length()+1,0),stack;
        f[0]=1;
        pair<int,int> ans = pair<int,int>(0,1);
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='(')
            {
                stack.push_back(i);
            }else if(stack.size()!=0){
                e[i] = stack.back();
                if(s[e[i]-1]==')'&&e[e[i]-1]!=-1)
                {
                    e[i] = e[e[i]-1];
                }
                f[i - e[i]+1]++;
                stack.pop_back();
            }
        }
        for(int i=0;i<f.size();i++)
        {
            if(f[i]>0)
            {
                ans = pair<int,int>(i,f[i]);
            }
        }
        cout<<ans.first<<" "<<ans.second;
        
    }
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}