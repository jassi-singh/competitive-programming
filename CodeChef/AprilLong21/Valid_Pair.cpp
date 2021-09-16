#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b || a == c || b == c)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}