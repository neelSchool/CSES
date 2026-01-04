#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
void move(int n, int a, int temp, int b) {
    if (n==1) {
        cout << a << " " << b << "\n";
        return;
    } 
    move(n-1,a,b,temp);
    cout << a << " " << b << "\n";
    move(n-1,temp,a,b);
}
int main() {
    int n;
    cin >> n;
    int mov = pow(2,n) - 1;
    cout <<  mov << "\n";
    move(n,1,2,3);
}