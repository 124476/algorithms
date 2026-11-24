#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>& a, int l, int r) {
    int pivot = a[r];
    int i = l - 1;

    for (int j = l; j < r; ++j) {
        if (a[j] <= pivot) {
            ++i;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[r]);
    return i + 1;
}

void quickSort(vector<int>& a, int l, int r) {
    if (l >= r) return;

    int p = partition(a, l, r);
    quickSort(a, l, p - 1);
    quickSort(a, p + 1, r);
}

int main() {
    vector <int> arr = {4, 6, 2, 4, 6, 8, 2, 4};

    quickSort(arr, 0, arr.size() - 1);

    for (int a : arr) cout << a << " ";
}