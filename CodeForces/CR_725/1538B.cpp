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
        vector<int> vec(n);
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            sum += vec[i];
        }
        if (sum % n == 0)
        {
            int avg = sum / n;
            for (auto &it : vec)
            {
                if (it > avg)
                    ans++;
            }
        }
        else
        {
            ans = -1;
        }
        cout<<ans<<endl;
    }
}
