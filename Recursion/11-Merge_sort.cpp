#include <bits/stdc++.h>
using namespace std;


void merge(vector<int>& arr , int s , int e){
    int mid = s + (e - s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    vector<int> first(len1);
    vector<int> second(len2);

    int k = s;
    for(int i = 0 ; i < len1 ; i++){
        first[i] = arr[k++];
    }

     k = mid + 1;
    for(int i = 0 ; i < len2 ; i++){
        second[i] = arr[k++];
    }

    int idx1 = 0 ;
    int idx2 = 0 ;
     k = s;

     //merge 2 sorted arrays
    while(idx1 < len1 && idx2 < len2){
        if(first[idx1] < second[idx2]){
            arr[k++] = first[idx1++];
        }else{
            arr[k++] = second[idx2++];
        }
    }

    while(idx1 < len1){
        arr[k++] = first[idx1++];
    }

    while(idx2 < len2){
        arr[k++] = second[idx2++];
    }

}
void mergeSort(vector<int>& arr , int s , int e){
    if(s >= e) return;
    int mid = s + (e - s)/2;
     mergeSort(arr , s , mid);
     mergeSort(arr , mid + 1 , e);
     merge( arr , s , e);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1 , 56 , 12 , 32 , 1};
    int n =  5;
    mergeSort(arr , 0 , n - 1);
    for(int& num : arr){
        cout << num << " ";
    }cout << endl;

    return 0;
}