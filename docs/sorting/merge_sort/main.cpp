#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>& a, int l, int m, int r) {
    vector<int> left(a.begin() + l, a.begin() + m + 1);
    vector<int> right(a.begin() + m + 1, a.begin() + r + 1);

    int i = 0, j = 0, k = l;

    while (i < (int)left.size() && j < (int)right.size()) {
        if (left[i] <= right[j]) a[k++] = left[i++];
        else                       a[k++] = right[j++];
    }

    while (i < (int)left.size())  a[k++] = left[i++];
    while (j < (int)right.size()) a[k++] = right[j++];
}

void mergeSort(vector<int>& a, int l, int r) {
    if (l >= r) return;

    int m = l + (r - l) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {
    vector <int> arr = {4, 6, 2, 4, 6, 8, 2, 4};

    mergeSort(arr, 0, arr.size() - 1);

    for (int a : arr) cout << a << " ";
}