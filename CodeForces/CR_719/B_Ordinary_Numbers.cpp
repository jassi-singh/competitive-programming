#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int k = stoi(n);
        int sz = n.length();
        int s = sz - 1;
        int x = 1;
        while (s--)
        {
            x = x * 10 + 1;
        }
        cout << k / x + 9 * (sz - 1) << endl;
    }
}