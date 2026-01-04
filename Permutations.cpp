#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    } else if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << "\n";
        return 0;
    } else {
        vector<int> vi;
        for (int i = n-1; i > 0; i-=2) {
            vi.push_back(i);
        }
        for (int i = n; i > 0; i-=2) {
            vi.push_back(i);
        }
        for (int e : vi) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}