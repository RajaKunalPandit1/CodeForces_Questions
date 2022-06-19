Output Status : 

By Rajakunalpandit, contest: Codeforces Round #790 (Div. 4), problem: (A) Lucky?, Accepted


// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <unordered_set>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;


int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll t;
    cin>> t;
    
    while(t--){
        
        string s;
    cin >> s;
    int a = s[0] - '0', b = s[1] - '0', c = s[2] - '0';
    int x = s[3] - '0', y = s[4] - '0', z = s[5] - '0';
    if (a + b + c == x + y + z) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    } 
        
    }

    
	return 0;
}

