#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    cout << lcm(4, 6) << "\n";
    cout << lcm(24, 6) << "\n";

    return 0;
}