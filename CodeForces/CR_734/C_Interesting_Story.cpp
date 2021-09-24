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
        int n;
        cin >> n;
        int ans = 0;
        vector<string> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        for (int i = 'a'; i < 'f'; i++)
        {
            vector<int> v1;
            int sum = 0, curr_ans = 0;
            for (auto s : vec)
            {
                int k = count(s.begin(), s.end(), i);
                int oth = s.length() - k;
                v1.push_back(k - oth);
            }
            sort(v1.rbegin(), v1.rend());
            for (auto v : v1)
            {
                if (sum + v > 0)
                {
                    sum += v;
                    curr_ans++;
                }
                else
                    break;
            }
            ans = max(ans, curr_ans);
        }
        cout << ans << endl;
    }
}