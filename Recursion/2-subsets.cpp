#include<bits/stdc++.h>

using namespace std;

void func(int idx , vector<int> &nums, vector<int> &curr , vector<vector<int>> &subs){
    if(idx == nums.size()){
        subs.push_back(curr);
        return;
    }

    func(idx + 1 , nums , curr , subs); //excluding the element

    curr.push_back(nums[idx]);
    func(idx + 1, nums , curr , subs);
    curr.pop_back();

}

int main(){
    int n ;
    cout << "Enter the length of nums : \n";
    cin >> n;
    cout << "Enter elements : \n";
    vector<int> nums(n);
    vector<int> curr;
    for(int &num : nums){
        cin >> num;
    }

    vector<vector<int>> subs;
    func(0 , nums ,curr, subs);
    cout << "{ ";
    for(int i = 0 ; i < subs.size() ; i++){
        cout << "[ ";
        for(int j = 0 ; j < subs[i].size() ; j++){
            cout << subs[i][j] << " ";
        }
        cout << " ]";
    }
    cout << " }";

}