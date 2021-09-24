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
        string s;
        cin >> s;
        string ans = "YES";
        int l = s.length();
        while (l)
        {
            char c = l + 'a' - 1;
            if (s[0] == c)
                s.erase(s.begin());
            else if (s[l - 1] == c)
                s.erase(s.begin() + l - 1);
            else
            {
                ans = "NO";
                break;
            }
            l--;
        }
        cout << ans << endl;
    }
}