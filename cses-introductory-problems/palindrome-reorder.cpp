#include <bits/stdc++.h>
using namespace std;

int main() {
	string str; cin>>str;
	int n = str.size();
	
	map <char, int> freq;
	for(auto it: str) freq[it]++;
	string ans(n, '#');
	int ind = 0;
	int oddcnt = 0;
	for(auto it: freq){
	    if (it.second & 1){
	        ans[n/2] = it.first;
	        it.second --;
	        oddcnt++;
	    }
	    
	    while (it.second%2==0 && it.second >0){
	        ans[ind] = it.first;
	        ans[n-1-ind] = it.first;
	        ind++;
	        it.second -= 2;
	    }
	}
	if (oddcnt>1) cout<<"NO SOLUTION";
	else cout<<ans;
	return 0;
}
