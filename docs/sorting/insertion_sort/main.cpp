#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertionSort(vector<int>& a) {
    int n = (int)a.size();

    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            --j;
        }

        a[j + 1] = key;
    }
}

int main() {
    vector <int> arr = {4, 6, 2, 4, 6, 8, 2, 4};

    insertionSort(arr);

    for (int a : arr) cout << a << " ";
}