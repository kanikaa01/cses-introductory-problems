#include <bits/stdc++.h>
using namespace std;

vector <string> findGrayCode(int num){
    if (num==1) return {"0", "1"};
    
    vector <string> base = findGrayCode(num - 1);
    vector <string> ans;
    int n = base.size();
    for(int i=0; i<n; i++){
        ans.push_back("0" + base[i]);
    }
    for(int i=n-1; i>=0; i--){
        ans.push_back("1" + base[i]);
    }
    return ans;
}

int main() {
	int n; cin>>n;
	vector <string> vec = findGrayCode(n);
	for(auto str: vec) cout<<str<<endl;
	return 0;
}
