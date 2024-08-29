#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    int ans = 0;
    int n = str.size();
    int i = 0;
    while(i<n){
        auto ch = str[i];
        int cnt = 0;
        while(i<n && str[i]==ch){
            i++;
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout<<ans;
}