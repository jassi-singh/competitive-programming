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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int ones = 0, zeros = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeros++;
            else
                ones++;
        }
        cout << zeros * a + ones * b << endl;
    }
}