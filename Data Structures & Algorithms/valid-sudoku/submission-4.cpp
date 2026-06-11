class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // loop over rows
        for (int i = 0; i < board.size(); i++) {
            // check across
            for (int r = 0; r < board[i].size(); r++) {
                if (count(board[i].begin(), board[i].end(), board[i][r]) > 1 && isdigit(board[i][r])) {
                    std::cout << board[i][r] << " occurs more than once" << "\n";
                    return false;
                }
            }

            // if its in a top row of a square
            if (i % 3 == 0) {
                // check squares
                for (int set = 0; set < 3; set++) {
                    vector<int> square;

                    for(int s = 0; s < board[i].size(); s++) {
                        if (s < 3) {
                            square.push_back(board[i][s + (set * 3)]);
                        }
                        else if (s > 2 && s < 6) {
                            square.push_back(board[i+1][(s % 3) + (set * 3)]);
                        }
                        else {
                            square.push_back(board[i+2][(s % 3) + (set * 3)]);
                        }
                        
                        if (square.size() > 0){
                            if (count(square.begin(), square.end(), square[s]) > 1 && isdigit(square[s])) {
                                return false;
                            }
                        }
                    }
                }
            }


            // check columns
            vector<int> column;
            for (int c = 0; c < board.size(); c++) {
                column.push_back(board[c][i]);

                if (count(column.begin(), column.end(), column[c]) > 1 && isdigit(column[c])) {
                    return false;
                }
                
            }
        }

        return true;
    }
};