#include <bits/stdc++.h>
using namespace std;
#define ll long long
void printAns(int n, bool ans)
{
    cout << "Case #" << n << ": ";
    cout << (ans ? "Possible" : "Impossible") << endl;
}
void solve(int tc)
{
    int r, c;
    cin >> r >> c;
    int tree = 0;
    vector<vector<char>> vec(r, vector<char>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cin >> vec[i][j];
            if (vec[i][j] == '^')
                tree++;
        }
    if (r == 1 or c == 1)
    {
        if (tree != 0)
        {
            printAns(tc, 0);
        }
        else
        {
            printAns(tc, 1);
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                    cout << ".";
                cout << endl;
            }
        }
    }
    else
    {
        printAns(tc, 1);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cout << "^";
            cout << endl;
        }
    }
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