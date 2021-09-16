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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll sum = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            ll k = i + 1 - a[i];
            if (k < 0)
            {
                flag = 1;
                break;
            }
            else
            {
                sum += k;
            }
        }
        if (flag == 1)
            cout << "Second" << endl;
        else if (sum % 2)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    return 0;
}