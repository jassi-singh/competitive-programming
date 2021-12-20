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
        vector<string> mat(n);
        for (int i = 0; i < n; i++)
        {
            cin >> mat[i];
        }
        vector<pair<int, int>> points;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == '*')
                {
                    points.push_back(make_pair(i, j));
                }
            }
        }
        if (points[0].first != points[1].first && points[0].second != points[1].second)
        {
            points.push_back(make_pair(points[0].first, points[1].second));
            points.push_back(make_pair(points[1].first, points[0].second));
        }
        else if (points[0].first == points[1].first)
        {
            points.push_back(make_pair((points[0].first + 1) % n, points[0].second));
            points.push_back(make_pair((points[1].first + 1) % n, points[1].second));
        }
        else
        {
            points.push_back(make_pair(points[0].first, (points[0].second + 1) % n));
            points.push_back(make_pair(points[1].first, (points[1].second + 1) % n));
        }
        mat[points[2].first][points[2].second] = '*';
        mat[points[3].first][points[3].second] = '*';
        for (auto s : mat)
        {
            cout << s << endl;
        }
    }
}