#include <bits/stdc++.h>
using namespace std;

long long nC2(int n){
    return (n*1LL*(n-1))/2;
}

long long calculate(long long num){
    if (num<2) return 0;
    long long total = nC2(num*num);
    long long unfavorable = 2*1LL*(num-1)*(num-2)*2;
    
    return (total - unfavorable);
}

int main() {
	long long n; cin>>n;
	for(long long k=1; k<=n; k++){
	    cout<<calculate(k)<<endl;
	}
	return 0;
}
