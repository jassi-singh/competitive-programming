#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
string convert(string time)
{
    string res=time.substr(0,5);
    string h = time.substr(0,2);
    if(time[6]=='A')
    {
        if(h=="12")
        {
            res[0]=res[1]='0';
        }
    }else
    {
        if(h!="12")
        {
            int p = stoi(h);
            p+=12;
            string k = to_string(p);
            res[0]=k[0];
            res[1] = k[1];
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin>>ws;
    while (t--)
    {
        string meet;
        getline(cin,meet);
        meet=convert(meet);
        int f;
        cin>>f;
        cin>>ws;
        while(f--)
        {
            string lr;
            getline(cin,lr);
            string l = lr.substr(0,8);
            string r = lr.substr(9);
            l = convert(l);
            r = convert(r);
            if(l<=meet)
            {
            	if(r>=meet)
            	    cout<<1;
                else
            		cout<<0;
            }else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}