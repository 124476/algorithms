#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void selectionSort(vector<int>& a) {
    int n = (int)a.size();

    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;

        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[minIdx]) {
                minIdx = j;
            }
        }

        if (minIdx != i) swap(a[i], a[minIdx]);
    }
}

int main() {
    vector <int> arr = {4, 6, 2, 4, 6, 8, 2, 4};

    selectionSort(arr);

    for (int a : arr) cout << a << " ";
}