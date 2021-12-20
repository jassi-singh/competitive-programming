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
        string a, b;
        cin >> a >> b;
        if (a.length() < b.length())
            swap(a, b);
        int mx = 0;
        int n = b.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                string sub = b.substr(i, j);
                int found = a.find(sub);
                if (found != string::npos)
                {
                    mx = max(mx, j);
                }
            }
        }
        cout << a.length() + b.length() - 2 * mx << endl;
    }
}