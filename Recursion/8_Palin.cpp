#include <bits/stdc++.h>
using namespace std;

bool palin(string& s , int i , int j){
    if(i > j) return true;
    if(s[i] != s[j]) return false;

    return palin(s , i + 1 , j - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    cout << palin(s , 0 , s.size() - 1) << endl;

    return 0;
}