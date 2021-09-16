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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        map<int, int> m1, m2;
        int max_count = 0;
        int oprn = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m1[a[i]]++;
            if (x != 0)
            {
                m1[a[i] ^ x]++;
                m2[a[i] ^ x]++;
            }
        }
        for (auto m : m1)
        {
            if (m.second > max_count)
            {
                max_count = m.second;
                oprn = m2[m.first];
            }
            else if (m.second == max_count && oprn > m2[m.first])
            {
                oprn = m2[m.first];
            }
        }
        cout << max_count << " " << oprn << endl;
    }
    return 0;
}