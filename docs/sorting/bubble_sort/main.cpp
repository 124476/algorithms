#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& a) {
    int n = (int)a.size();

    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

int main() {
    vector <int> arr = {4, 6, 2, 4, 6, 8, 2, 4};

    bubbleSort(arr);

    for (int a : arr) cout << a << " ";
}