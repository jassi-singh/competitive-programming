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
        int n,ans=0;
        cin>>n;
        string str[n];
        map<string,vector<char>> m;
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
            m[str[i].substr(1)].push_back(str[i][0]);
        }
        int size = m.size();
        auto itr = m.begin();
        while(itr!=m.end())
        {
            vector<char> f=itr->second;
            sort(f.begin(),f.end());
            auto ptr = itr;
            ptr++;
            while(ptr!=m.end())
            {
                vector<char> s= ptr->second,v(n);
                sort(s.begin(),s.end());
                auto ls = set_difference(f.begin(), f.end(), s.begin(), s.end(), v.begin()); 
                int a = ls - v.begin();
                ls = set_difference(s.begin(), s.end(), f.begin(), f.end(), v.begin()); 
                int b= ls - v.begin();
                ans+=a*b;
                ptr++;
            }
            itr++;
        }
        cout<<ans*2<<endl;
    }
    return 0;
}