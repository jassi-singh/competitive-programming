#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

float getround(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        float k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        float time = 100/(k1*k2*k3*v);
        time = getround(time);
        if(time<(float)9.58)
            cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}