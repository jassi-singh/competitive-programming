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
        int k, a, b;
        cin >> k >> a >> b;
        vector<int> m(a), p(b), ans;
        bool flag = true;
        for (int i = 0; i < a; i++)
            cin >> m[i];
        for (int i = 0; i < b; i++)
            cin >> p[i];
        int i = 0, j = 0;
        while (flag)
        {
            if (i < a && j < b)
            {
                if (m[i] == 0)
                {
                    ans.push_back(m[i]);
                    i++;
                    k++;
                }
                else if (p[j] == 0)
                {
                    ans.push_back(p[j]);
                    j++;
                    k++;
                }
                else if (m[i] > p[j])
                {
                    if (k >= p[j])
                    {
                        ans.push_back(p[j]);
                        j++;
                    }
                    else
                    {
                        flag = false;
                    }
                }
                else
                {
                    if (k >= m[i])
                    {
                        ans.push_back(m[i]);
                        i++;
                    }
                    else
                    {
                        flag = false;
                    }
                }
            }
            else if (i < a)
            {
                if (m[i] == 0)
                {
                    ans.push_back(m[i]);
                    i++;
                    k++;
                }
                else if (k >= m[i])
                {
                    ans.push_back(m[i]);
                    i++;
                }
                else
                {
                    flag = false;
                }
            }
            else if (j < b)
            {
                if (p[j] == 0)
                {
                    ans.push_back(p[j]);
                    j++;
                    k++;
                }
                else if (k >= p[j])
                {
                    ans.push_back(p[j]);
                    j++;
                }
                else
                {
                    flag = false;
                }
            }
            else
            {
                break;
            }
        }
        if (flag)
        {
            for (auto a : ans)
            {
                cout << a << " ";
            }
        }
        else
            cout << -1;
        cout << endl;
    }
}