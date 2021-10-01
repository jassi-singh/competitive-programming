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
        deque<int> d;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if (i == 0)
            {
                d.push_back(k);
            }
            else
            {
                if (k <= d.front())
                    d.push_front(k);
                else
                    d.push_back(k);
            }
        }
        for (auto i : d)
            cout << i << " ";
        cout << endl;
    }
}