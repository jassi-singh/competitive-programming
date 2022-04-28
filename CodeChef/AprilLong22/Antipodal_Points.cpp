#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
float distance(float x1, float x2, float y1, float y2)
{
    return ((x2 - x1) * (x2 - x1) +
            (y2 - y1) * (y2 - y1) * 1.0);
}
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        short int n;
        cin >> n;
        vector<pair<float, float>> points(n);
        for (short int i = 0; i < n; i++)
        {
            float x, y;
            cin >> x >> y;
            points[i] = make_pair(x, y);
        }
        ll ans = 0;
        vector<pair<pair<pair<float, float>, pair<float, float>>, pair<pair<float, float>, float>>> mp;
        for (short int i = 0; i < n - 1; i++)
        {
            for (short int j = i + 1; j < n; j++)
            {
                mp.push_back(make_pair(make_pair(points[i], points[j]), make_pair(make_pair((points[i].first + points[j].first) / 2, (points[i].second + points[j].second) / 2), distance(points[i].first, points[j].first, points[i].second, points[j].second) / 4)));
            }
        }

        for (auto antiPoint : mp)
        {
            for (pair<float, float> point : points)
            {
                if (point == antiPoint.first.first || point == antiPoint.first.second)
                    continue;
                if (distance(point.first, antiPoint.second.first.first, point.second, antiPoint.second.first.second) == antiPoint.second.second)
                    ans++;
            }
        }
        cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}