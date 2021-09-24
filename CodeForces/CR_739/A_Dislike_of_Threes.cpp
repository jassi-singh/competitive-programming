#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> liked;
void precompute()
{
    for (int i = 1; i < 10000; i++)
    {
        if (i % 3 == 0 || i % 10 == 3)
        {
            continue;
        }
        else
        {
            liked.push_back(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    precompute();
    while (t--)
    {
        int k;
        cin >> k;
        cout << liked[k - 1] << endl;
    }
}