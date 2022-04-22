#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(vector<int> &prices)
{
    int profit = 0, buy = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if(buy>prices[i])
            buy = prices[i];
        profit = max(profit,prices[i]-buy);
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