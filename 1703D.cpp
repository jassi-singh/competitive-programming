#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<string> st;
        vector<string> vec;
        vector<bool> ans = vector<bool>(n, false);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            st.insert(s);
            vec.push_back(s);
        }
        for (int j = 0; j < n; j++)
        {
            int len = vec[j].length();
            for (int i = 1; i < len; i++)
            {
                if (st.count(vec[j].substr(0, i)) and st.count(vec[j].substr(i)))
                {
                    ans[j] = 1;
                    break;
                }
            }
        }
        for (bool b : ans)
            cout << b;
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}