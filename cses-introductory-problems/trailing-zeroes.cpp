#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin>>n;
	long long base = 5;
	long long ans = 0;
	while(n>=base){
	    ans += (n/base);
	    base *= 5;
	}
	cout<<ans;
	return 0;
}
