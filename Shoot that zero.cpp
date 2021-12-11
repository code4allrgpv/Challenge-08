#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        int a[n];
        
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        
        int l = -1, r = -1;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 1 and l == -1)
                l = i;
            if (a[n-1-i] == 1 and r == -1)
                r = n-1-i;
        }
        
        int res = 0;
        for (int k = l; k <= r; ++k)
            if (a[k] == 0)
                ++res;
        
        cout << res << "\n";
    }
    
    return 0;
}
