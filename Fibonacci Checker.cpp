#include "bits/stdc++.h"
using namespace std;
int t[1000001];
int n = 1000000;
void fib(){
    t[0] = 0;
    t[1] = 1;
    for(int i=2;i<=n;i++){
        t[i] = t[i-1] + t[i-2];
    }
}
int main(){
    fib();
    sort(t,t+n);
    int T;
    cin >> T;
    while(T--){
        int x;
        cin >> x;
        int ind = lower_bound(t,t+n,x) - t;
        if(t[ind] == x){
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
}
