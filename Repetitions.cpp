#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt = 1, mx = 1;
    for (int i = 0; i < s.size()-1; i++) {
        mx = max(mx,cnt);
        if (s[i] == s[i+1]) {
            cnt++;
            mx = max(mx,cnt);
        } else {
            cnt = 1;
        }
    }
    cout << mx << "\n";
}