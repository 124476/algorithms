#include <iostream>

using namespace std;

int pow(int a, int n) {
    int res = 1;
    while (n > 0) {
        if (n % 2 == 1)
            res *= a;
        a *= a;    
        n /= 2;
    }

    return res;
}

int main() {
    cout << pow(2, 9) << "\n";
    cout << pow(3, 4) << "\n";

    return 0;
}