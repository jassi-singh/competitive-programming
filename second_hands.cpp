#include <bits/stdc++.h>
using namespace std;
#define ll long long
void printAns(int n, bool ans)
{
    cout << "Case #" << n << ": ";
    cout << (ans ? "YES" : "NO") << endl;
}
void solve(int tc)
{
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
        cin >> s[i], m[s[i]]++;
    if ((double)n / (double)k > 2)
    {
        printAns(tc, 0);
        return;
    }
    for (int i = 0; i < n; i++)
        if (m[s[i]] > 2)
        {
            printAns(tc, 0);
            return;
        }
    printAns(tc, 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
#endif
    int t = 1, i = 1;
    cin >> t;
    while (t--)
    {
        solve(i);
        i++;
    }
    return 0;
}