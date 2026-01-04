#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
const int mod = 1000000007;
const int base = 2;
int main() {
    int n;
    cin >> n;
    int ans = 1;
    // we want to return 2^n by implementing modular exponentition
    for (int e = 1; e <= n; e++) {
        ans = (base * ans) % mod;
    }
    cout << ans << "\n";
    return 0;
}