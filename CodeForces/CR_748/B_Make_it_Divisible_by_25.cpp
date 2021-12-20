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
        string n;
        cin >> n;
        int ans1 = 0;
        int ans2 = 0;

        int i = n.length();
        while (1)
        {
            i--;
            if (n[i] == '5')
                break;
            ans1++;
        }
        while (1)
        {
            i--;
            if (n[i] == '2' || n[i] == '7')
                break;
            ans1++;
        }
        i = n.length();
        while (1)
        {
            i--;
            if (n[i] == '0')
                break;
            ans2++;
        }
        while (1)
        {
            i--;
            if (n[i] == '5' || n[i] == '0')
                break;
            ans2++;
        }
        cout << min(ans1, ans2) << endl;
    }
}