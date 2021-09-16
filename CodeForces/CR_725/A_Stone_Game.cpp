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
        int n;
        cin >> n;
        vector<int> a;
        int i, j;
        int mx = -1, mn = 1000;
        for (int k = 0; k < n; k++)
        {
            int b;
            cin >> b;
            if (mx < b)
            {
                mx = b;
                i = k;
            }
            if (mn > b)
            {
                mn = b;
                j = k;
            }
        }
        int temp = i;
        i = min(i, j);
        j = max(temp, j);
        int ans = min(i + n + 1 - j, min(j + 1, n - i));
        cout << ans << endl;
    }
    return 0;
}