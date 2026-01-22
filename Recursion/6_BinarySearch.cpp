#include <bits/stdc++.h>
using namespace std;

bool bsearch(vector<int>& arr ,int start , int end, int x){
    if(start > end) return false;
    int mid = start + (end - start )/2;
    if(arr[mid] == x) return true;
    else if(arr[mid] > x) {
        end = mid - 1;
        return bsearch(arr , start , end , x);
    }else if(arr[mid] < x){
        start = mid + 1;
        return bsearch(arr , start , end , x);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1 , 4 , 5 , 9 , 13 , 17 , 25 , 34, 50};
    int size = 9;
    int x ;
    cin >> x;
    bool ans = bsearch(arr  , 0 , 8, x);
    cout << ans << endl;
    return 0;
}