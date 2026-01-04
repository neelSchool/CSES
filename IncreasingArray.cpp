#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long &e : v) {
        cin >> e;
    }
    long long x = 0;
    for (long long i = 0; i < n-1; i++) {
        x += max((long long)0,v[i] - v[i+1]);
        v[i+1] = max(v[i],v[i+1]);
        //cout << v[i]-v[i+1] << " " << x << "\n";
    }
    cout << x << "\n";
}