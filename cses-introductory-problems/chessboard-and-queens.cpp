#include <bits/stdc++.h>
using namespace std;

void traverse(int ind, vector <string> &board,vector <bool>&col, vector <bool> &left, vector <bool>&right, long long &ans){
    if (ind == 8){
        ans++;
        return;
    }
    for(int c=0; c<8; c++){
        int l = ind + c;
        int r = ind + (8-c);
        if (!col[c] && !left[l] && !right[r] && board[ind][c]=='.'){
            col[c] = true;
            left[l] = true;
            right[r] = true;
            traverse(ind+1, board, col, left, right, ans);
            col[c] = false;
            left[l] = false;
            right[r] = false;
        }
    }
    return;
}

int main() {
    vector <string> board(8);
    for(int i=0; i<8; i++) cin>>board[i];
    
    long long ans = 0;
    vector <bool> left(15, false);
    vector <bool> right(15, false);
    vector <bool> row(8, false);
    vector <bool> col(8, false);
    
    traverse(0, board, col, left, right, ans);
    cout<<ans<<endl;
}
