#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> board;
        int xWin = 0, oWin = 0;
        bool empty;
        for (int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            if (s.compare("XXX") == 0)
                xWin++;
            else if (s.compare("OOO") == 0)
                oWin++;
            if (s.find('_') > 0)
                empty = true;
            board.push_back(s);
        }

        if(xWin>1||oWin>1)
        {
            cout<<3<<endl;
            break;
        }


        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] == 'X')
            {
                if(xWin==1)
                {
                    cout<<3<<endl;
                    break;
                }
                xWin++;
            }
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] == 'O')
            {
                if(oWin==1)
                {
                    cout<<3<<endl;
                    break;
                }
                oWin++;
            }
        }

        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] == 'X')
            xWin++;
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] == 'O')
            oWin++;

        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] == 'X')
            xWin++;
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] == 'O')
            oWin++;

        if (oWin > 0 && xWin > 0)
            cout << 3;
        else if (oWin > 0 || xWin > 0 || !empty)
            cout << 1;
        else
            cout << 2;
        cout << endl;
    }
    return 0;
}