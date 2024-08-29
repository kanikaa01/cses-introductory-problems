#include <bits/stdc++.h>
using namespace std;

void build(string curr, map <char, int> &freq, set <string> &st, int n){
    if (curr.size() == n){
        st.insert(curr);
        return;
    }
    
    for(auto it: freq){
        if (it.second>0){
            freq[it.first]--;
            build(curr + it.first, freq, st, n);
            freq[it.first]++;
        }
    }
    
    return;
}

int main() {
	string str; cin>>str;
	map <char, int> freq;
	for(auto it: str) freq[it]++;
	set <string> st;
	build("", freq, st, str.size());
	cout<<st.size()<<endl;
	for(auto s: st) cout<<s<<endl;
}
