#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin>>n;
	long long m = 1e9 + 7; 
	long long ans = 1;
	long long base = 2;
	while(n){
	    if(n&1){
	        n--;
	        ans *= base;
	        ans %=m;
	    }else{
	       base *=base;
	       base %= m;
	       n/=2;
	    }
	}
	
	cout<<ans<<endl;
}
