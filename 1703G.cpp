#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
int c;
long long openChest(vector<int> &vec, long long i, bool type, int div)
{
    if (i == vec.size())
        return 0;
    return max(vec[i] / div - c + openChest(vec, i + 1, type, div), vec[i] / (div * 2) + openChest(vec, i + 1, !type, div * 2));
}
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> c;
        vector<int> vec = vector<int>(n, 0);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        cout << openChest(vec, 0, 0, 1) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}