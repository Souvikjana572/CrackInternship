class Solution {
public:
void find(int row,int n,vector<vector<string>>&ans,vector<string>&board,vector<bool>&col,vector<bool>&leftdiag,vector<bool>&rightdiag){
    if(row==n){
        ans.push_back(board);
        return ;
    }
    for(int j=0;j<n;j++){
        if(col[j]==0&&leftdiag[row-j+n-1]==0&&rightdiag[row+j]==0){
        col[j]=1;
        leftdiag[row-j+n-1]=1;
        rightdiag[row+j]=1;
        board[row][j]='Q';
        find(row+1,n,ans,board,col,leftdiag,rightdiag);
        col[j]=0;
        leftdiag[row-j+n-1]=0;
        rightdiag[row+j]=0;
        board[row][j]='.';
    }
}
}
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>>ans;
         vector<string>board(n);
         for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
         board[i].push_back('.');
         vector<bool>col(n,0);
         vector<bool>leftdiag(2*n-1,0);
         vector<bool>rightdiag(2*n-1,0);
         find(0,n,ans,board,col,leftdiag,rightdiag);
         return ans;
    }
};
