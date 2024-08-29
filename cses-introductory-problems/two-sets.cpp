#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	long long total = (n*1LL*(n+1))/2*1LL;
	if (total&1){
	    cout<<"NO"<<endl;
	}else{
	    cout<<"YES"<<endl;
	    long long req = (total >> 1);
	    vector <long long> v1;
	    vector <long long> v2;
	    long long ct=0;
	    for(long long i=n; i>0; i--){
	        if (ct+i <= req){
	            ct += i;
	            v1.push_back(i);
	        }else{
	            v2.push_back(i);
	        }
	    }
	    cout<<v1.size()<<endl;
	    for(auto value: v1) cout<<value<<" ";
	    cout<<endl;
	    cout<<v2.size()<<endl;
	    for(auto value: v2) cout<<value<<" ";
	}
	
	return 0;
}
