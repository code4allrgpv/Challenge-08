#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,x,y;
    cin>>n>>x>>y;
    if(x>=(n-y)){
    cout<<n-x;}
    else{
        cout<<y+1;
    }
    return 0;
}

