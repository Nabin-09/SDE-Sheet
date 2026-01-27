#include <bits/stdc++.h>
using namespace std;

void solve(string& s , string& op , int idx , vector<string>& ans){
    if(idx >= s.length()){
        ans.push_back(op);
        return;
    }

    solve(s , op , idx + 1 , ans);
    char ch = s[idx]; 
    op.push_back(ch);
    solve(s , op , idx + 1, ans);
    op.pop_back();//backtrack
}

vector<string> subsequences(string& s){
    vector<string> ans;
    string op = "";
    int idx = 0 ;
    solve(s , op , idx , ans);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<string> ans = subsequences(s);
    for(int i = 0 ;i < ans.size() ; i++){
        for(int j = 0 ; j < ans[i].size() ; j++){
            cout << ans[i][j];
        }cout<<endl;
    }

    return 0;
}