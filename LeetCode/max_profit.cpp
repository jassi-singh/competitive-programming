#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(vector<int> &prices)
{
    int b = prices[0], profit = 0;
    for (int price : prices)
    {
        if (price - b > 0)
            profit = max(profit, price - b);
        else
            b = price;
    }
    return profit;
}
int main()
{
    int n;
    cin >> n;
    vector<int> prices;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        prices.push_back(v);
    }
    cout << solve(prices) << endl;
    return 0;
}