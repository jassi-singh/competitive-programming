#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

vector<ll> cnt;
vector<bool> isPrime;

void precompute(ll N)
{
    isPrime = vector<bool> (N+1,true);
    cnt = vector<ll>(N+1);
    isPrime[0]=isPrime[1]=false;
    cnt[0]=cnt[1]=0;

    ll val=0;
    for(ll i=2;i<N;i++)
    {
        if(isPrime[i])
        {
            val++;
            for(ll j=i*i;j<=N;j+=i)
                isPrime[j]=false;
        }
        cnt[i] = val;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    precompute(1000001);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x,y;
        cin>>x>>y;
        if(cnt[x]<=y)
            cout<<"Chef\n";
        else cout<<"Divyam\n";
    }
    return 0;
}