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
        ll d,D,P,Q,total=0;
        cin>>D>>d>>P>>Q;
        ll n = D/d;
        total = d*(n*P + (n*(n-1)/2)*Q);
        if(D%d!=0)
        {
            total+=(D-n*d)*(P+n*Q);
        }
        cout<<total<<endl;
    }
    return 0;
}