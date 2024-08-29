#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    long long r; cin>>r;
	    long long c; cin>>c;
	    long long ans;
	    r--; c--;
	    
	    if (r<=c){
	        long long lead;
	        if(c&1) lead = c*c+1;
	        else lead = (c+1)*(c+1);
	        
	        long long diff;
	        if (c&1) diff = 1;
	        else diff = -1;
	        
	        ans = lead +0LL + (r*1LL*(diff));
	    }else{
	        long long temp = r + (r%2);
	        long long lead = temp*1LL*temp + ((r%2) ? 0 : 1);
	        long long diff = (r&1) ? -1 : 1;
	        
	        ans = lead + c*(diff);
	    }
	    
	    cout<<ans<<endl;
	}
}
