/*
The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

Example 1:
Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above

Example 2:
Input: n = 1
Output: [["Q"]]
 
LEETCODE Problem Number---51
*/

#include<iostream>
using namespace std;
#include<vector>


bool isvalid(vector<string>& board,int n,int row,int col){
    // Checking horizontal
    for(int j=0; j<n;j++){
        if(board[row][j]=='Q') return false;
    }

    // checking vertical
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q') return false;
    }

    // left diagaonal
    for(int i=row,j=col; i>=0 && j>=0; i--,j--){
        if(board[i][j]=='Q') return false;
    }

    // Right diagaonal
    for(int i=row,j=col; i>=0 && j<n; i--,j++){
        if(board[i][j]=='Q') return false;
    }

    return true;
}

void nQueens(vector<string>& board,int n,int row,vector<vector<string>>& ans){
    if(row==n){ // base case
        ans.push_back({board});
        return;
    }

    for(int j=0; j<n; j++){
        if(isvalid(board,n,row,j)){
            board[row][j]='Q';
            nQueens(board,n,row+1,ans);
            board[row][j]='.'; // backtrack
        }
    }
}

vector<vector<string>> solveNQueens(int n,vector<vector<string>>& ans) {

    vector<string>board(n,string(n,'.'));
    nQueens(board,n,0,ans);

    return ans;
}

int main(){

    int n=4;
    vector<vector<string>> ans;
    solveNQueens(n,ans);
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}
