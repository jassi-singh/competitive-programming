#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i % 2 == 0)
                even.insert(a % 2);
            else
                odd.insert(a % 2);
        }
        if (odd.size() == 1 && even.size() == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}