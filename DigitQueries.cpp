#include <iostream>
#include <vector>
#include <string>
#include <cmath>
typedef long long ll;
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while (tc--) {
        ll k;
        cin >> k;
        ll cnt = 9, dlen = 1;
        while (true) {
            ll blcksz = cnt * dlen;
            if (k > blcksz) {
                k -= blcksz;
                dlen++;
                cnt *= 10;
            } else {
                break;
            }
        }
        k--;
        ll numidx = k/dlen;
        ll digidx = k%dlen;
        ll num = numidx + (ll) pow(10,dlen-1);
        string s = to_string(num);
        cout << s[(int)digidx] << "\n";
    }
}