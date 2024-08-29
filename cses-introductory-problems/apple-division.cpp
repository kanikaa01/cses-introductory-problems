#include <bits/stdc++.h>
using namespace std;

void traverse(int ind, vector<long long>&a, long long curr, long long total, long long &ans){
    int n = a.size();
    if (ind==n){
        ans = min(ans, abs(total - 2*curr));
        return;
    }
    traverse(ind+1, a, curr, total, ans);
    traverse(ind+1, a, curr+a[ind], total, ans);
}

int main() {
	int n; cin>>n;
	vector <long long> a(n);
	long long total = 0;
	for(int i=0; i<n; i++) {cin>>a[i]; total +=a[i];}
	long long ans = INT_MAX;
	traverse(0, a, 0, total, ans);
	cout<<ans<<endl;
}
