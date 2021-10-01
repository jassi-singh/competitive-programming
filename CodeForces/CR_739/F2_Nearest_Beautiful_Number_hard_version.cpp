#include <bits/stdc++.h>
using namespace std;
#define ll long long
string solve(int i, int n, int dist, int k, string nw, string ori)
{
    if (dist > k)
    {
        return "";
    }
    if (nw.substr(0, i) < ori.substr(0, i))
    {
        return "";
    }
    if (i >= n)
    {
        return nw;
    }
    for (char val = '0'; val <= '9'; ++val)
    {
        nw[i] = val;
        bool found = false;
        for (int j = 0; j < i; ++j)
        {
            if (nw[j] == val)
            {
                found = true;
                break;
            }
        }
        string chk = solve(i + 1, n, dist + (found == false), k, nw, ori);
        if (chk.size())
        {
            return chk;
        }
    }
    return "";
}
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
        stringstream ss;
        ss << n;
        string str = ss.str();
        cout << solve(0, str.length(), 0, k, string(str.length(), '0'), str) << endl;
    }
}