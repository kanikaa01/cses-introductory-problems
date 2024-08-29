#include <bits/stdc++.h>
using namespace std;

void toh(int n, int from, int to){
    if (n>0){
        toh(n-1, from, 6-(to+from));
        cout<<from<<" "<<to<<endl;
        toh(n-1, 6-(to+from), to);
    }
}

int main() {
	int n; cin>>n;
	cout<< ( (1<<n) - 1)<<endl;
	toh(n, 1, 3);
	return 0;
}
