class Solution {
public:
bool isvalid(vector<string>& board,int row,int col){
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q')
            return false;
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q')
            return false;
    }
    for(int i=row-1,j=col+1;i>=0 && j<board.size();i--,j++){
        if(board[i][j]=='Q')
            return false;
    }
   return true;
}
void nqueen(int row,vector<string>& board,int n,vector<vector<string>>& ans){
    if(row==n){
        ans.push_back(board);
        return;
    }
    for(int col=0;col<n;col++){
        if(isvalid(board,row,col)){
            board[row][col]='Q';
            nqueen(row+1,board,n,ans);
            board[row][col]='.';
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n,string(n,'.'));
    nqueen(0,board,n,ans);
    return ans;
}
};