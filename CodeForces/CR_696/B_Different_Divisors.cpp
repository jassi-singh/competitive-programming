#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n) 
{ 
    if (n <= 1) 
        return 0; 
  
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return 0; 
  
    return 1; 
} 
ll prime(int n)
{
    if(isPrime(n))
    {
        return n;
    }else
    {
        return prime(n+1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a=prime(1+n);
        ll b = prime(a+n);
        cout<<a*b<<endl;
    }
}