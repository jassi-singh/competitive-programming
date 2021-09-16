#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans=11;
    while (ans--)
    {
        if(n%ans==0)
        {
            cout << ans;
            break;
        }
    }
}