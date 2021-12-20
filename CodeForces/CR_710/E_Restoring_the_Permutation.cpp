#include <bits/stdc++.h>
using namespace std;
#define ll long long
void minPerm(vector<int> a, int n)
{
    vector<int> b(n);
    iota(b.begin(), b.end(), 1);
    for (int i = 0; i < n; i++)
    {
        auto found = find(b.begin(), b.end(), a[i]);
        if (found == b.end())
        {
            a[i] = *b.begin();
            b.erase(b.begin());
        }
        else
        {
            b.erase(found);
        }
    }
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}
void maxPerm(vector<int> a, int n)
{
    vector<int> b(n);
    iota(b.begin(), b.end(), 1);
    for (int i = 0; i < n; i++)
    {
        auto found = find(b.begin(), b.end(), a[i]);
        if (found == b.end())
        {
            auto l = lower_bound(b.begin(), b.end(), a[i]) - 1;
            a[i] = *l;
            b.erase(l);
        }
        else
        {
            b.erase(found);
        }
    }
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}
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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = i + 1;
        }
        minPerm(a, n);
        maxPerm(a, n);
    }
}