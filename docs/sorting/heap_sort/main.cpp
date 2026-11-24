#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void siftDown(vector<int>& a, int n, int i) {
    while (true) {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if (l < n && a[l] > a[largest]) largest = l;
        if (r < n && a[r] > a[largest]) largest = r;

        if (largest == i) break;

        swap(a[i], a[largest]);
        i = largest;
    }
}

void heapSort(vector<int>& a) {
    int n = (int)a.size();

    for (int i = n / 2 - 1; i >= 0; --i) {
        siftDown(a, n, i);
    }

    for (int i = n - 1; i > 0; --i) {
        swap(a[0], a[i]);
        siftDown(a, i, 0);
    }
}

int main() {
    vector <int> arr = {4, 6, 2, 4, 6, 8, 2, 4};

    heapSort(arr);

    for (int a : arr) cout << a << " ";
}