#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int ans = n;
    for(int i=1; i<n; i++){
        int ele; cin>>ele;
        ans ^= (i);
        ans ^= (ele);
    }
    
    cout<<ans;
}