class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(!isvalid(board,i,j)){
                    return false;
                }
                
            }
         }  return true;
          
    }
    bool isvalid(vector<vector<char>>& board,int row,int col){
            if(board[row][col]=='.')return true;
            for(int i=0;i<9;i++){
                if(col!=i && board[row][i]==board[row][col]) return false;
            }

            for(int i=0;i<9;i++){
                if(row!=i && board[i][col]==board[row][col])return false;
            }
            int boxc=(col/3)*3;
            int boxr=(row/3)*3;

            for(int i=boxr;i<boxr+3;i++){
                for(int j=boxc;j<boxc+3;j++){
                    if((i!=row || j!=col) && board[i][j]==board[row][col])return false;
                }
            }
return true;
    }
};