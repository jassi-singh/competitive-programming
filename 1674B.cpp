#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
void preCompute(map<string, int> &vec)
{
    int cnt = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 'a'; j <= 'z'; j++)
        {
            if (i == j)
                continue;
            string s;
            s.push_back(i);
            s.push_back(j);
            vec[s] = cnt++;
        }
    }
}
void solve()
{
    int t = 1;
    cin >> t;
    map<string, int> vec;
    preCompute(vec);
    while (t--)
    {
        string s;
        cin >> s;
        cout << vec[s] + 1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}