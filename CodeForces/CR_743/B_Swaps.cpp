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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        if (a[0] < b[0])
        {
            cout << 0 << endl;
        }
        else
        {
            int m = 0, k = 0;
            while ((m < n - 1) && (a[m] > a[m + 1]))
            {
                m++;
            }
            while (a[m] > b[k])
            {
                k++;
            }
            int ans1 = m + k;
            m = min_element(a.begin(), a.end()) - a.begin();
            k = max_element(b.begin(), b.end()) - b.begin();
            cout << min(m, min(k, ans1)) << endl;
        }
    }
    return 0;
}