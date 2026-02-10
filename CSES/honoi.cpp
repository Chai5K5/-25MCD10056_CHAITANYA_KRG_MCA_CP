#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, int from, int to, int aux, vector<pair<int, int>>& moves) {
    if (n == 1) {
        moves.push_back({from, to});
        return;
    }
    
    // Move n-1 disks from 'from' to 'aux' using 'to'
    hanoi(n - 1, from, aux, to, moves);
    
    // Move the largest disk from 'from' to 'to'
    moves.push_back({from, to});
    
    // Move n-1 disks from 'aux' to 'to' using 'from'
    hanoi(n - 1, aux, to, from, moves);
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> moves;
    
    // Solve Tower of Hanoi: move from stack 1 to stack 3 using stack 2
    hanoi(n, 1, 3, 2, moves);
    
    cout << moves.size() << endl;
    for (auto& move : moves) {
        cout << move.first << " " << move.second << endl;
    }
    
    return 0;
}
