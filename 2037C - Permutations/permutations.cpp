#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n <= 4) {
            cout << -1 << endl;
            continue;
        }
        
        // Odd numbers except 5: 1, 3, 7, 9, 11, ...
        for (int i = 1; i <= n; i += 2) {
            if (i != 5) {
                cout << i << " ";
            }
        }
        cout << 5 << " ";  // 5 is last odd, so 5+4=9 (composite)
        
        // Even numbers: 4, 2, 6, 8, 10, ...
        cout << 4 << " " << 2;
        for (int i = 6; i <= n; i += 2) {
            cout << " " << i;
        }
        
        cout << endl;
    }
    
    return 0;
}
