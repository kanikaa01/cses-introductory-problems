#include <bits/stdc++.h>
using namespace std;

long long mypow10(int num){
    long long ans = 1;
    long long base = 10;
    while(num>0){
        if (num&1){
            num--;
            ans*=base;
        }else{
            base*=base;
            num/=2;
        }
    }
    
    return ans;
}

int main() {
    int q; cin>>q;
    while(q--){
        long long k; cin>>k;
        if (k<10){
            cout<<k<<endl;
            continue;
        }
        long long digits = 1;
        long long base = 1;
        long long prev = 0;
        while(k > (9*base * digits)){
            k-= ((9*base)*digits);
            base *= 10;
            digits++;
        }
        
        long long number = base + ((k-1)/digits);
        long long ind = (digits-1) - ((k-1)%digits);
        long long ans = (number/(mypow10(ind))) % 10;
        cout<<ans<<endl;
    }
}
