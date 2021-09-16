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
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if ((a + b <= d && c <= e) || (a + c <= d && b <= e) || (c + b <= d && a <= e))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}