#include <bits/stdc++.h>
using namespace std;
#define ll long long
bitset<32> decToBin(int n)
{
    bitset<32> a;
    int i = 0;
    while (n)
    {
        a[i] = n % 2;
        n /= 2;
        i++;
    }
    return a;
}
pair<int, bitset<32>> check(bitset<32> a, bitset<32> b)
{
    bitset<32> c;
    int k = 0, p = 1;
    for (int i = 0; i < 32; i++)
    {
        if (a[i] == 0 && b[i] == 1)
            c[i] = 1;
        a[i] = a[i] | b[i];
        k += c[i] * p;
        p *= 2;
    }
    return make_pair(k, a);
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
        vector<bitset<32>> v(n);
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v[i] = decToBin(k);
        }
        for (int i = 1; i < n; i++)
        {
            auto p = check(v[i], v[i - 1]);
            ans[i] = p.first;
            v[i] = p.second;
        }
        for (auto a : ans)
            cout << a << " ";
        cout << endl;
    }
}