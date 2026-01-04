#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        ll a, b;
        cin >> a >> b;
        ll ans = 1;
        if (b == 0) {
            cout << 1 << "\n";
        } else if (a == 0) {
            cout << 0 << "\n";
        } else {
            while (b) {
                if (b & 1) {
                    ans = (ans*a) % mod;
                }
                a = (a * a) % mod;
                b >>= 1;
            }
            cout << ans << "\n";
        }
    }
}