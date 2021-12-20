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
        int i = 0, count = 0;
        while (i < n - 1)
        {
            int mx = max(a[i], a[i + 1]);
            int mn = min(a[i], a[i + 1]);
            while(2*mn<mx)
            {
                count++;
                mn=mn*2;
            }
            i++;
        }
        cout << count << endl;
    }
}