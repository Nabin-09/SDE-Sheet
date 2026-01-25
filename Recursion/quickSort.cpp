#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr , int s , int e){
    int pivot = arr[s];
    int cnt = 0 ;
    for(int i = s + 1 ; i <= e ; i++){
        if(arr[i] <= pivot) cnt++;
    }

    int pivot_idx = s + cnt;
    swap(arr[pivot_idx] , arr[s]); //place pivot at right index

    //handle left and right part

    int i = s , j = e;
    while(i < pivot_idx && j > pivot_idx){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i < pivot_idx && j > pivot_idx){
            swap(arr[i++] , arr[j--]);
        }
    }

    return pivot_idx;


}


void quickSort(vector<int>& arr , int s  , int e){
    if(s >= e) return ;
    //partitioning

    int p = partition(arr , s , e);
    // left part sort
    quickSort(arr , s , p - 1);

    //sort right part
    quickSort(arr ,  p + 1 , e);
}

void print(vector<int>& arr){
    for(int n : arr){
        cout << n << " ";
    }cout<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = { 34 , 12 , 0 , 1 , 67 , 32 , 43 , 10  , 9 , 100};
    int n = 10;
    quickSort(arr ,0 , n - 1);
    print(arr);
    return 0;
}