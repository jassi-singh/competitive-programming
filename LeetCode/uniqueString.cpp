#include <bits/stdc++.h>
using namespace std;
#define ll long long
int firstUniqChar(string s)
{
    map<int, int> m;
    for (char c : s)
    {
        m[c]++;
    }
    for (int i = 0; i < s.length(); i++)
        if (m[s[i]] == 1)
            return i;
    return -1;
}
int main()
{
    string s;
    cin >> s;
    cout << firstUniqChar(s);
    return 0;
}