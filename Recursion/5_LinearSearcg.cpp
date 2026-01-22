#include <bits/stdc++.h>
using namespace std;
bool lsearch(vector<int>& arr  , int idx , int x){
    if(idx == arr.size()) return false;
    if(arr[idx] == x) return true;
    

    return lsearch(arr , idx + 1 , x);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x ;
    cin >> x;
    vector<int> arr = {1 , 2 , 6 , 12 , 98 , 14, 67};
    int size = 7;

    bool ans = lsearch(arr , 0 , x);
    cout << ans << endl;
    return 0;
}