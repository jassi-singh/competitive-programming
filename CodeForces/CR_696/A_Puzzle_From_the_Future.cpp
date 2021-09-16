#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;
        vector<char> sum, a;
        if (b[0] == '1')
            sum.push_back('2');
        else
            sum.push_back('1');
        for (int i = 1; i < n; i++)
        {
            if (sum[i - 1] == '2')
                sum.push_back('1');
            else if (sum[i - 1] == '1')
            {
                if (b[i] == '1')
                    sum.push_back('2');
                else
                    sum.push_back('0');
            }
            else
            {
                if (b[i] == '1')
                    sum.push_back('2');
                else
                    sum.push_back('1');
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<(char)(48+sum[i]-b[i]);
        }
        cout<<endl;
    }
}