// remove it => https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> result; 

    for (int i = 0; i < n; i++) {
        if (v[i] != x) {
            result.push_back(v[i]);
        }
    }

    if (result.empty()) {
        cout << endl;
    } 
    else {
        for (int i = 0; i < result.size(); i++) {
          cout << result[i] << ' '; 
        }
    }

    return 0;
}