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
        int c1, c2;
        int a = n / 3;
        if (n % 2 == 0)
        {
            if (a % 2 == 0)
            {
                c1 = a;
                c2 = (n - c1) / 2;
            }
            else
            {
                c2 = a;
                c1 = n - 2 * c2;
            }
        }
        else
        {
            if (a % 2 != 0)
            {
                c1 = a;
                c2 = (n - c1) / 2;
            }
            else
            {
                c2 = a;
                c1 = n - 2 * c2;
            }
        }

        cout << c1 << " " << c2 << endl;
    }
}