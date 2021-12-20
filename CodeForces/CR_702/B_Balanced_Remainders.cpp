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
        int c[3] = {0, 0, 0};
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            c[k % 3]++;
        }
        int i = 0, cnt = 0;
        while (c[0] != c[1] || c[1] != c[2])
        {
            if (c[i] > n / 3)
            {
                cnt += c[i] - n / 3;
                c[(i + 1) % 3] += c[i] - n / 3;
                c[i] = n / 3;
            }
            i = (i+1)%3;
        }
        cout << cnt << endl;
    }
}