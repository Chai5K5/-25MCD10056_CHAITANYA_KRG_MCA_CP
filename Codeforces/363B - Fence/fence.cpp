#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    
    // Calculate sum of first k planks
    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += h[i];
    }
    
    int min_sum = current_sum;
    int min_pos = 0;  // 0-indexed position
    
    // Slide the window
    for (int i = 1; i <= n - k; i++) {
        // Remove the leftmost element of previous window, add new rightmost element
        current_sum = current_sum - h[i - 1] + h[i + k - 1];
        
        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_pos = i;
        }
    }
    
    // Output 1-indexed position
    cout << min_pos + 1 << endl;
    
    return 0;
}
