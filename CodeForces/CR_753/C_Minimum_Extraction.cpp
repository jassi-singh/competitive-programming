#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            sort(a.begin(),a.end());
            a[i] = a[i] - a[i-1];
        }
        cout<<a[n-1]<<endl;
    }
}