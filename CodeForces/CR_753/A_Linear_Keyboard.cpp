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
        map<char, int> key;
        for (int i = 0; i < 26; i++)
        {
            char a;
            cin >> a;
            key[a] = i;
        }
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 1; i < s.length(); i++)
        {
            ans += abs(key[s[i]] - key[s[i - 1]]);
        }
        cout << ans << endl;
    }
}