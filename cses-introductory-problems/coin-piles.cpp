#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    long long a; cin>>a;
	    long long b; cin>>b;
	    if ((max(a, b) > 2*min(a, b)) || ((a+b)%3!=0)){
	        cout <<"NO"<<endl;
	    }else{
	        cout<<"YES"<<endl;
	    }
	}
	
	return 0;
}
