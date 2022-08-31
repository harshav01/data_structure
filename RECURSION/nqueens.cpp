class Solution {
public:
    bool issafe(int row,int col,vector<string>&board,int n)
    {
        int cola = col;
        int rowa = row;
        while(row>=0 and col>=0)
        {
            if((board[row][col])=='Q')
                return false;
            row--;col--;
        }
        col=cola;
        row=rowa;
        while(col>=0)
        {
            if((board[row][col])=='Q')
                return false;
            col--;
        }
        col=cola;
        row=rowa;
        while(row<n and col>=0)
        {
            if((board[row][col])=='Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
public:
    void solve(int col,int n,vector<string>&board,vector<vector<string>>&ans)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(issafe(row,col,board,n))
            {
                board[row][column]='Q';
                solve(col+1,n,board,ans);
                board[row][column]='.';
            }
        }
            
    }
public:
    vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>>ans;
    vector<string>board(n);
    string s(n,'.');
    for(int i=0;i<n;i++)
        board[i]=s;
    solve(0,n,board,ans);
    return ans;    
    }
};