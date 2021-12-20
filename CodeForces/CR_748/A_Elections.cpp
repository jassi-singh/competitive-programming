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
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(a, max(b, c));
        int cnt = 0;
        if (a == mx)
            cnt++;
        if (b == mx)
            cnt++;
        if (c == mx)
            cnt++;

        if (cnt > 1 && a == mx)
            cout << 1 << " ";
        else if (a == mx)
            cout << 0 << " ";
        else
            cout << mx - a + 1 << " ";
        if (cnt > 1 && b == mx)
            cout << 1 << " ";
        else if (b == mx)
            cout << 0 << " ";
        else
            cout << mx - b + 1 << " ";
        if (cnt > 1 && c == mx)
            cout << 1 << " ";
        else if (c == mx)
            cout << 0 << " ";
        else
            cout << mx - c + 1 << " ";
        cout << endl;
    }
}