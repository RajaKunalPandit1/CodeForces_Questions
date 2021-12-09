Output Status: 

By Rajakunalpandit, contest: Codeforces Beta Round #97 (Div. 2), problem: (A) Presents, Accepted

#include <iostream>
using namespace std;
int n, b, mas[105];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        mas[b] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << mas[i] << " ";
    }
}
