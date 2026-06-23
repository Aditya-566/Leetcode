class Solution {
public:
   bool issafe(vector<string>& board,int row,int col){
            for(int i=0;i<col;i++){
                if(board[row][i]=='Q')return false;
            }
            for(int i=0;i<row;i++){
                if(board[i][col]=='Q')return false;
            }
            for(int i=row-1,j=col-1; i>=0 && j>=0;i--,j--){
                if(board[i][j]=='Q')return false;
            }
            for(int i=row-1,j=col+1;i>=0 && j<board.size();i--,j++){
                if(board[i][j]=='Q')return false;
            }
            return true;
    }
int nqueen(vector<string>& board,int row,int n){
    int count=0;
    if(row==n){
        return 1;
    }
    for(int col=0;col<board.size();col++){
        if(issafe(board,row,col)){
            board[row][col]='Q';
            count+=nqueen(board,row+1,n);
            board[row][col]='.';
        }
    }
    return count;
}

    int totalNQueens(int n) {
        vector<string> board(n,string(n,'.'));
       return  nqueen(board,0,n);
    }
    
};