#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << "\n";
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> sufMax(n);
        sufMax[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            sufMax[i] = max(sufMax[i + 1], a[i]);
        }

        
        int i = 0;
        while (i < n && a[i] == sufMax[i]) {
            i++;
        }

        if (i < n) {
            int j = n - 1;
            while (a[j] != sufMax[i]) {
                j--;
            }
            reverse(a.begin() + i, a.begin() + j + 1);
        }

        print(a);
    }
    return 0;
}
