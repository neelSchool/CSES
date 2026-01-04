#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        v2.push_back(a);
    }
    int cnt = 0, i = 0, j = 0;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    while (i < n && j < m) {
        if (v2[j] < v1[i] - k) {
            j++;
        } else if (v2[j] > v1[i] + k) {
            i++;
        } else {
            cnt++;
            i++;
            j++;
        }
    }
    cout << cnt << "\n";
}