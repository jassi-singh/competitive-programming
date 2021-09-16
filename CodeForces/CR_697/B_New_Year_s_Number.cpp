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
        int a = n/2020;
        int b = n%2020;
        if(b<=a)
        {
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
}