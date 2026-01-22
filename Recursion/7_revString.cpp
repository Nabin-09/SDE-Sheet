#include <bits/stdc++.h>
using namespace std;

void rev(string& s , int i , int j){
    if(i >= j) return;
    swap(s[i] , s[j]);
    rev(s , i + 1 , j - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    rev(s , 0 , s.size() - 1);
    cout << s << endl;

    return 0;
}