#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool validSudoku(vector<vector<char>> board)
{
    for (int i = 0; i < 9; i++)
    {
        vector<bool> col(9, false), row(9, false);
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.')
            {
                int index = board[i][j] - '0';
                if (!row[index])
                    row[index] = true;
                else
                    return false;
            }
            if (board[j][i] != '.')
            {
                int index = board[j][i] - '0';
                if (!col[index])
                    col[index] = true;
                else
                    return false;
            }
        }
    }

    for (int i = 0; i < 9; i++)
    {
        vector<bool> subBox(9, false);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                int x = (i / 3) * 3 + j, y = (3 * (i % 3)) + k;
                if (board[x][y] != '.')
                {
                    int index = board[x][y] - '0';
                    if (!subBox[index])
                        subBox[index] = true;
                    else
                        return false;
                }
            }
        }
    }

    return true;
}
int main()
{
    vector<vector<char>> board(9, vector<char>(9));
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> board[i][j];

    cout << validSudoku(board) << endl;
    return 0;
}