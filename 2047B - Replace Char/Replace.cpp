#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        // Special case: single character
        if (n == 1) {
            cout << s << endl;
            continue;
        }
        
        // Count frequency of each character
        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        
        // Find character with max frequency
        char maxChar = s[0];
        int maxFreq = 0;
        for (auto& p : freq) {
            if (p.second > maxFreq) {
                maxFreq = p.second;
                maxChar = p.first;
            }
        }
        
        // Find character with min frequency (but different from maxChar if possible)
        char minChar = s[0];
        int minFreq = n + 1;
        for (auto& p : freq) {
            if (p.second < minFreq && p.first != maxChar) {
                minFreq = p.second;
                minChar = p.first;
            }
        }
        
        // If all characters are the same, we need to handle differently
        if (freq.size() == 1) {
            // All same character, replace with itself
            cout << s << endl;
            continue;
        }
        
        // Replace first occurrence of minChar with maxChar
        for (int i = 0; i < n; i++) {
            if (s[i] == minChar) {
                s[i] = maxChar;
                break;
            }
        }
        
        cout << s << endl;
    }
    
    return 0;
}
