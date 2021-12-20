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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        int f = -1;
        int l = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                if (cnt == 0)
                {
                    s[i] = 'x';
                    f = i;
                    cnt++;
                }
                l = i;
            }
        }
        if (s[l] == '*')
        {
            s[l] = 'x';
            cnt++;
        }
        int i = f + k;
        while (i < n)
        {
            if (s[i] == '*')
            {
                s[i] = 'x';
                cnt++;
            }
            else if (s[i] == '.')
            {
                for (int j = 0; j < k; j++)
                {
                    if (s[i - j] == '*')
                    {
                        s[i - j] = 'x';
                        cnt++;
                        i = i - j;
                        break;
                    }
                    else if (s[i - j] == 'x')
                    {
                        i = i - j;
                        break;
                    }
                }
            }
            i += k;
        }
        cout << cnt << endl;
    }
}