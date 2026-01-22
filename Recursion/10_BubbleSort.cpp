#include <bits/stdc++.h>
using namespace std;

void swap(int &a , int &b){
    a = a ^ b ;
    b = a ^ b;
    a = a ^ b;
}

void sortArray(vector<int>& arr , int n){
    if(n == 0 || n == 1) return;

    for(int i = 0 ; i < n - 1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    sortArray(arr , n - 1);
}
void print(vector<int>& arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i]<< " ";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {12 , 42 , 23 , 32 , 45 , 6};

    sortArray(arr , 6);

    print(arr);

    return 0;
}