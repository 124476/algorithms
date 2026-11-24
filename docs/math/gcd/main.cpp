#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    cout << gcd(25, 60) << "\n";
    cout << gcd(3, 39) << "\n";
    cout << gcd(81, 27) << "\n";
    cout << gcd(35, 49) << "\n";
    return 0;
}