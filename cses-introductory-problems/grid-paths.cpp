#include <bits/stdc++.h>
using namespace std;

int ans;
int vis[7][7];
string str;

void chalo(int r, int c, int done){
    if (vis[r][c]) return;
    if(done==48 || (r==6 && c==0)){
        ans += (done==48 && (r==6 && c==0));
        return;
    }
    
    bool hitwall = ((c>=1 && c<=5 && !vis[r][c-1] && !vis[r][c+1]) && ((r==0 && vis[r+1][c]) || (r==6 && vis[r-1][c]))) || (r>=1 && r<=5 && !vis[r-1][c] && !vis[r+1][c] && ((c==0 && vis[r][c+1]) || (c==6 && vis[r][c-1])));
    
    if (hitwall) return;
    
    // this is the catch in the question: agar wall hit karega toh it cannot traverse
    
    bool split = ((c!=0 && c!=6 && vis[r][c-1] && vis[r][c+1] && r!=0 && r!=6 && !vis[r-1][c] && !vis[r+1][c]) 
    || (r!=0 && r!=6 && vis[r+1][c] && vis[r-1][c] && c!=0 && c!=6 && !vis[r][c-1] && !vis[r][c+1]));
    
    if (split) return;
    
    vis[r][c] = 1;
    if (str[done]=='?' || str[done] == 'D'){
        if (r!=6) chalo(r+1, c, done+1);
    }
    if (str[done] =='?' || str[done] == 'U'){
        if (r!=0) chalo(r-1, c, done+1);
    }
    if (str[done] =='?' || str[done] == 'L'){
        if (c!=0) chalo(r, c-1, done+1);
    }
    if (str[done] =='?' || str[done] == 'R'){
        if (c!=6) chalo(r, c+1, done+1);
    }
    
    vis[r][c] = 0;
}

int main() {
    cin>>str;
    chalo(0, 0, 0);
    cout<<ans<<endl;
    return 0;
}
