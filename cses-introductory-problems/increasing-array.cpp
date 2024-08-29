#include <bits/stdc++.h>
using namespace std;

int main() {
	// increasing array 
	long long ans=0;
	int n; cin>>n;
	int prev = -1;
	
	for(int i=0; i<n; i++){
	    int ele; cin>>ele;
	    if (ele < prev){
	        ans += (prev-ele);
	    }else{
	        prev = ele;
	    }
	}
	
	cout<<ans;
}
