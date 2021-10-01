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
        deque<int> deq;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            if (i == 0)
            {
                deq.push_front(p);
            }
            else
            {
                int g = deq.end() - upper_bound(deq.begin(), deq.end(), p);
                int l = lower_bound(deq.begin(), deq.end(), p) - deq.begin();
                if (g > l)
                {
                    ans += l;
                    deq.push_front(p);
                }
                else if (l > g)
                {
                    ans += g;
                    deq.push_back(p);
                }
                else
                {
                    ans += l;
                    deq.push_front(p);
                }
            }
        }
        cout << ans << endl;
    }
}