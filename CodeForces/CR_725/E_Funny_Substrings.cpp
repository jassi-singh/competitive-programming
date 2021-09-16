#include <bits/stdc++.h>
using namespace std;
#define ll long long
int countHaha(string s)
{
    int cnt = 0;
    auto found = s.find("haha");
    while (found != string::npos)
    {
        cnt++;
        found = s.find("haha", found + 2);
    }
    return cnt;
}
struct myData
{
    int count;
    string prefix;
    string suffix;
};

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
        cin.ignore();
        map<string, myData> var;
        string a, b, c, d, e;
        while (n--)
        {
            cin >> a >> b >> c;
            if (b[0] == ':')
            {
                var[a].count = countHaha(c);
                if (c.length() >= 4)
                {
                    var[a].prefix = c.substr(0, 4);
                    var[a].suffix = c.substr(a.length() - 4, 4);
                }
                else
                {
                    var[a].prefix = c;
                    var[a].suffix = c;
                }
            }
            else
            {
                cin >> d >> e;
                var[a].count = var[c].count + var[e].count + countHaha(var[c].suffix + var[e].prefix) - countHaha(var[c].suffix) - countHaha(var[e].prefix);
                if ((c + e).length() > 4)
                    var[a].prefix = (c + e).substr(0, 4);
                else
                    var[a].prefix = c + e;
                if ((c + e).length() > 4)
                    var[a].suffix = (c + e).substr(a.length() - 4, 4);
                else
                    var[a].suffix = c + e;
            }
        }
        cout << var[a].count << endl;
    }
}