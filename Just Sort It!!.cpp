#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef long int l;
const ll mod = 1000000007;
const ll mymax = 1e18;
const ll mymin = -1e18;
const double PIE = 3.1415926536;


ll calc(ll n)
{
    ll ans = 0;
    while(n > 0){
        ans += (n & 1);
        n >>= 1;
    }
    return ans;
}

int main()
{

    fast_io;
    ll n;
    cin >> n;
    ll a[n];
    pair <ll, ll> p[n];

    for(ll i = 0; i < n; i++){
        cin >> a[i];
        p[i].first = calc(abs(a[i]));
        p[i].second = i;
    }

    sort(p, p + n);
    for(ll i = 0; i < n; i++){
        cout << a[p[i].second] << " ";
    }

    return 0;
}
