#include "bits/stdc++.h"
using namespace  std;
#define ll long long
int main(){
    ll int t;
    cin >> t;
    while(t--){
        ll int n,k;
        cin >> n >> k;
        ll int a[n];
        for(ll int i=0;i<n;i++) cin >> a[i];
        ll int s = 0;
        for(ll int x : a) s += x;
        ll int m = 0;
        for(ll int x : a){
            m += (x+k-1)/k;
        }
        cout << (s+k-1)/k << " " << m << '\n';     
    }
}
