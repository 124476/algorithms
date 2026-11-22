#include <iostream>
#include <vector>

using namespace std;

int lowerBound(const vector<int>& a, int target) {
    int l = 0, r = (int)a.size();
    while (l < r) {
        int md = l + (r - l) / 2;
        if (a[md] < target) l = md + 1;
        else r = md;
    }
    return l;
}

int upperBound(const vector<int>& a, int target) {
    int l = 0, r = (int)a.size();
    while (l < r) {
        int md = l + (r - l) / 2;
        if (a[md] <= target) l = md + 1;
        else r = md;
    }
    return l;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 7, 7, 7, 7, 7, 7, 9, 11, 13, 15};
    //               0  1  2  3  4  5  6  7  8  9  10 11  12  13

    cout << "size = " << a.size() << "\n\n";

    cout << "lowerBound(7) = " << lowerBound(a, 7) << "\n"; // 3  — первый 7
    cout << "upperBound(7) = " << upperBound(a, 7) << "\n"; // 10 — первый > 7
    cout << "count(7)      = " << upperBound(a, 7) - lowerBound(a, 7) << "\n\n"; // 7

    cout << "lowerBound(4)  = " << lowerBound(a, 4)  << "\n"; // 2  — куда вставить 4
    cout << "lowerBound(8)  = " << lowerBound(a, 8)  << "\n"; // 10 — куда вставить 8
    cout << "lowerBound(20) = " << lowerBound(a, 20) << "\n"; // 14 — за концом
    cout << "lowerBound(0)  = " << lowerBound(a, 0)  << "\n"; // 0  — в начало

    return 0;
}