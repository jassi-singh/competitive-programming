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
        string n;
        cin>>n;
        int cnt=0;
        if(n[0]=='1')
            cnt=1;
        for(int i=1;i<n.length();i++)
        {
            if(n[i]=='1'&&n[i-1]=='0')
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}