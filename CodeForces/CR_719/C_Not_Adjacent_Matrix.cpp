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
        if (n == 2)
            cout << -1;
        else
        {
            int i = 1;
            int cnt = 0;
            for (int j = 0; j < n * n; j++)
            {
                if (i <= n * n)
                {
                    cout << i << " ";
                    i += 2;
                    if (i > n * n)
                    {
                        i = 2;
                    }
                }
                if ((j + 1) % n == 0 && j + 1 < n * n)
                    cout << endl;
            }
        }
        cout << endl;
    }
}