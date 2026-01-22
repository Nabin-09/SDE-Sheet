#include <bits/stdc++.h>
using namespace std;

int power(int a , int b){
    if(b == 0) return 1;

    long long half = power(a , b/2);
    if(b & 1) return a * half * half;
    else return half * half;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Binary Exponentiation

    int a , b ;
    cin >> a >> b;
    long ans = power(a , b);
    cout << ans << endl;

    return 0;
}