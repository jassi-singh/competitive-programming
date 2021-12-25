#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool canConstruct(string ransomNote, string magazine)
{
    map<int, int> rmap, mmap;
    for (int c : ransomNote)
        rmap[c]++;
    for (int c : magazine)
        mmap[c]++;
    for (auto m : rmap)
        if(m.second > mmap[m.first]) return false;

    return true;
}
int main()
{
    string ransomNote, magazine;
    cin >> ransomNote >> magazine;
    cout << canConstruct(ransomNote, magazine);
    return 0;
}