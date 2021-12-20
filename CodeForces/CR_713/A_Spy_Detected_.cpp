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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans;
        for (int i = 0; i < n; i++)
        {
            if (i < n - 2)
            {
                if (a[i] != a[i + 1] && a[i] != a[i + 2])
                    ans = i;
            }
            else if (i == n - 2)
            {
                if (a[i] != a[i + 1] && a[i] != a[i - 1])
                    ans = i;
            }
            else
            {
                if (a[i] != a[i - 1] && a[i] != a[i - 2])
                    ans = i;
            }
        }
        cout << ans + 1 << endl;
    }
}