// class Solution {
// public:
//     void solveSudoku(vector<vector<char>>& board) {
//         solve(board);
//     }
//     bool solve(vector<vector<char>> &board)
//     {
//         int i,j;
//         char c;
//         for(i=0;i<9;i++)
//         {
//             for(j=0;j<9;j++)
//             {
//                 if(board[i][j]=='.')
//                 {
//                     for(c='1';c<='9';c++)
//                     {
//                         if(valid(i,j,c,board)){
//                         board[i][j]=c;
//                         if(solve(board))
//                         {
//                             return true;
//                         }
//                         board[i][j]='-';
//                         }
//                     }
//                 return false;
//                 }
//             }
//         }
//         return true;
//     }
//   bool valid(int r,int cl,char c,vector<vector<char>>& board){
//     for(int i=0;i<9;i++)
//     {
//         if(board[r][i]==c)
//         return false;
//         if(board[i][cl]==c)
//         return false;
//         if(board[3*(r/3)+i/3][3*(cl/3)+i%3]==c)
//         return false;
//     }
//     return true;
//   }
// };


class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

private:
    bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') {
                    for (char num = '1'; num <= '9'; num++) {
                        if (isValid(board, row, col, num)) {
                            board[row][col] = num;
                            if (solve(board)) return true;
                            board[row][col] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char num) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num || board[i][col] == num) return false;
        }
        int startRow = (row / 3) * 3, startCol = (col / 3) * 3;
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == num) return false;
            }
        }
        return true;
    }
};