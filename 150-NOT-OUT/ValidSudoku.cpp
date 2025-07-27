/*
Each row must contain the digits 1-9 without duplicates.
Each column must contain the digits 1-9 without duplicates.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without duplicates.
Return true if the Sudoku board is valid, otherwise return false

Note: A board does not need to be full or be solvable to be valid.

Example 1
Input: board =
[["1","2",".",".","3",".",".",".","."],
["4",".",".","5",".",".",".",".","."],
[".","9","8",".",".",".",".",".","3"],
["5",".",".",".","6",".",".",".","4"],
[".",".",".","8",".","3",".",".","5"],
["7",".",".",".","2",".",".",".","6"],
[".",".",".",".",".",".","2",".","."],
[".",".",".","4","1","9",".",".","8"],
[".",".",".",".","8",".",".","7","9"]]

Output: true
Example 2
Input: board =
[["1","2",".",".","3",".",".",".","."],
["4",".",".","5",".",".",".",".","."],
[".","9","1",".",".",".",".",".","3"],
["5",".",".",".","6",".",".",".","4"],
[".",".",".","8",".","3",".",".","5"],
["7",".",".",".","2",".",".",".","6"],
[".",".",".",".",".",".","2",".","."],
[".",".",".","4","1","9",".",".","8"],
[".",".",".",".","8",".",".","7","9"]]

Output: false
Explanation: There are two 1’s in the top-left 3×3 sub-box.

Constraints:

board.length == 9
board[i].length == 9
board[i][j] is a digit 1-9 or ‘.’.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<char>> board = {
        {'1','2','.','.','3','.','.','.','.'},
        {'4','.','.','5','.','.','.','.','.'},
        {'.','9','8','.','.','.','.','.','3'},
        {'5','.','.','.','6','.','.','.','4'},
        {'.','.','.','8','.','3','.','.','5'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','.','.','.','.','.','2','.','.'},
        {'.','.','.','4','1','9','.','.','8'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    // brute force approach
    // Time Complexity: O(n^2) where n is the size of the board (9 in this case)
    // Space Complexity: O(1) since we are not using any extra space

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            char num = board[i][j]; 
            if(num != '.') {
                // Check row
                for(int k = 0; k < 9; k++) {
                    if(k != j && board[i][k] == num) {
                        cout << "false" << endl;
                        return 0;
                    }
                }
                // Check column
                for(int k = 0; k < 9; k++) {
                    if(k != i && board[k][j] == num) {
                        cout << "false" << endl;
                        return 0;
                    }
                }
                // Check box
                int boxRowStart = (i / 3) * 3, boxColStart = (j / 3) * 3;
                for(int r = boxRowStart; r < boxRowStart + 3; r++) {
                    for(int c = boxColStart; c < boxColStart + 3; c++) {
                        if((r != i || c != j) && board[r][c] == num) {
                            cout << "false" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "true" << endl; // If no duplicates found, return true



    // Time Complexity: O(1) since the board size is fixed (9x9)
    // Space Complexity: O(1) for the hash sets

    // unordered_set<char> rows[9], cols[9], boxes[9]; // 3 sets for each row, column, and box
    // for(int i = 0; i < 9; i++) {
    //     for(int j = 0; j < 9; j++) {
    //         char num = board[i][j];
    //         if(num != '.') {
    //             int boxIndex = (i / 3) * 3 + (j / 3); // Calculate box index
    //             if(rows[i].count(num) || cols[j].count(num) || boxes[boxIndex].count(num)) {
    //                 cout << "false" << endl;
    //                 return 0; // If any number is repeated, return false
    //             }
    //             rows[i].insert(num);
    //             cols[j].insert(num);
    //             boxes[boxIndex].insert(num);
    //         }
    //     }
    // }
    // cout << "true" << endl; // If no duplicates found, return true
    return 0;
}