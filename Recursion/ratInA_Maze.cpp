#include <bits/stdc++.h>
using namespace std;


bool isSafe(int x , int y , int n , vector<vector<int>> visited , vector<vector<int>> m){
     if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1) return true;
     else return false;
}

void solve(vector<vector<int>>& m , int n, vector<string>& ans , int x , int y , vector<vector<int>>& visited , string  path){
    if(x == n-1 && y == n - 1){
        ans.push_back(path);
        return ;
    }

    visited[x][y] = 1;
    int newX = x + 1;
    int newY = y;
    if(isSafe(newX , newY , n , visited , m)){
        path.push_back('D');
        solve(m , n , ans , newX , newY , visited , path);
        path.pop_back();
    }
     newX = x;
     newY = y - 1;
    if(isSafe(newX , newY , n , visited , m)){
        path.push_back('L');
        solve(m , n , ans , newX , newY , visited , path);
        path.pop_back();
    }
    newX = x;
    newY = y + 1;
    if(isSafe(newX , newY , n , visited , m)){
        path.push_back('R');
        solve(m , n , ans , newX , newY , visited , path);
        path.pop_back();
    }
    newX = x - 1;
     newY = y;
    if(isSafe(newX , newY , n , visited , m)){
        path.push_back('U');
        solve(m , n , ans , newX , newY , visited , path);
        path.pop_back();
    }   
    visited[x][y] = 0 ;
}


vector<string> findPath(vector<vector<int>>& m , int n){
    vector<string> ans;
    int srcx = 0 ;
    int srcy = 0;
    vector<vector<int>> visited(n , vector<int>(n , 0));
    string path = "";
    solve(m , n , ans , srcx , srcy , visited , path);
    sort(ans.begin() , ans.end());
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}