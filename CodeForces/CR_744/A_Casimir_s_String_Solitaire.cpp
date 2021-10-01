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
        map<char, int> m;
        for (auto c : s)
        {
            m[c]++;
        }
        if (m['A'] + m['C'] == m['B'])
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}