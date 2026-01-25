
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    void solve(vector<int>& nums , vector<int> output , int idx , vector<vector<int>>& ans){
        if(idx >= nums.size()){
            ans.push_back(output);
            return ;
        }

        solve(nums , output , idx + 1 , ans);

        int element = nums[idx];
        output.push_back(element);
        solve(nums , output , idx + 1 , ans);
    }



    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;

        int idx = 0 ;
        solve(nums , output , idx , ans);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> subs = {1 , 2 , 3};
    Solution obj ;
    vector<vector<int>> ans;
    ans = obj.subsets(subs);
    for(int i = 0 ; i < ans.size() ; i++){
        cout << "[";
        for(int j = 0 ; j < ans[i].size() ; j++){
            cout << ans[i][j] << " ";
        }
        cout << "]"<<endl;
    }

    return 0;
}