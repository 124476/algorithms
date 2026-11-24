#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> countingSort(const vector<int>& a) {
    if (a.empty()) return {};

    int mx = *max_element(a.begin(), a.end());
    vector<int> count(mx + 1, 0);

    for (int x : a) ++count[x];

    vector<int> res;
    res.reserve(a.size());

    for (int v = 0; v <= mx; ++v) {
        while (count[v]-- > 0) {
            res.push_back(v);
        }
    }

    return res;
}

int main() {
    vector <int> arr = {4, 6, 2, 4, 6, 8, 2, 4};

    arr = countingSort(arr);

    for (int a : arr) cout << a << " ";
}