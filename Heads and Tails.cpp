#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        for(int i=1;i<n;i++){
            if(str[i] == '0' && str[i-1] == '0')
                str[i] = '1', str[i-1] = '1';
        }
        if(count(str.begin(),str.end(),'1') == n)
            cout << "Possible\n";
        else cout << "Not Possible\n";
    }
    return 0;
}
