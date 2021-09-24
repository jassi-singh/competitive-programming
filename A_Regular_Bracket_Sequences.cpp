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
        vector<char> a;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a.push_back('(');
                cout << '(';
                if (j == i)
                {
                    int s = a.size();
                    while (s--)
                    {
                        a.pop_back();
                        cout << ')';
                    }
                }
            }
            int s = a.size();
            while (s--)
            {
                a.pop_back();
                cout << ')';
            }
            cout << endl;
        }
    }
}