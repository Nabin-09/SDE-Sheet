#include <bits/stdc++.h>
using namespace std;

int _sum(const vector<int>& arr, int index) {
    // base case
    if (index == arr.size()) return 0;

    // recursive case
    return arr[index] + _sum(arr, index + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1, 2, 3, 4, 5, 6};

    int sum = _sum(arr, 0);
    cout << sum << endl;
    return 0;
}
