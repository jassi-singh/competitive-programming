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
        int a = 0, b = 0;
        map<char, int> m1;
        for (char c : s)
        {
            m1[c]++;
        }
        for (auto m : m1)
        {
            if (m.second > 1)
                a++;
            else
                b++;
        }
        cout << a + b / 2 << endl;
    }
}