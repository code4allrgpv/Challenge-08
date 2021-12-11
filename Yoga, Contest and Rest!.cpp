#include <bits/stdc++.h>
using namespace std;

int work(int arr[], int n, int p) {
    if (n == 0)
        return 0;
    if (arr[n - 1] == 0)
        return 1 + work(arr, n - 1, 0);
    if (arr[n - 1] == 1) {
        if (p == arr[n - 1])
            return 1 + work(arr, n - 1, 0);
        else
            return work(arr, n - 1, 1);
    }
    if (arr[n - 1] == 2) {
        if (p == 2)
            return 1 + work(arr, n - 1, 0);
        else
            return work(arr, n - 1, 2);
    }
     //gym or contest
        int a = p == 1 ? INT_MAX : work(arr, n - 1, 1);
        int b = p == 2 ? INT_MAX : work(arr, n - 1, 2);
        return min(a, b);
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << work(arr, n, 0);
    return 0;
}
