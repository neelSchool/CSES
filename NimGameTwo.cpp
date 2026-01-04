#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        ll n;
        cin >> n;
        ll s = 0;
        for (ll i = 0; i < n; i++) {
            ll in;
            cin >> in;
            in %= 4;
            s ^= in;
        }
        if (s) {
            cout << "first\n";
        } else {
            cout << "second\n";
        }
    }
}