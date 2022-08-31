#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
public:
    bool solve(vector<vector<char>>& board)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(isvalid(board,i,j,c))
                        {
                            board[i][j]=c;
                            if(solve(board)==true)
                            return true; // checking for other cases until it becomes false
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;
                }    
            }
        }
    return true; // if we have already filled all the blocks and we never into the above loops;
    }
public:
    bool isvalid(vector<vector<char>>& board,int row,int col,char c)
    {
        for(int i=0;i<=9;i++)
        {
            if(board[row][i]=='c')
                return false;
            if(board[i][col]=='c')
                return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]=='c')
                return false;
       }
       return true;
    }
};
int main(){
    
    return 0;
}