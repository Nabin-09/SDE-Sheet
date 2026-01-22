#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int>& arr, int index) {
    // base case
    if (index >= arr.size() - 1) return true;

    // check current pair
    if (arr[index] > arr[index + 1]) return false;

    // recursive call
    return isSorted(arr, index + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {2, 4, 6, 7, 11};

    bool ans = isSorted(arr, 0);

    cout << ans << "\n";
    return 0;
}
