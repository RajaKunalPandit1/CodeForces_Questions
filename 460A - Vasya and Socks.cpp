Output Status:

By Rajakunalpandit, contest: Codeforces Round #262 (Div. 2), problem: (A) Vasya and Socks, Accepted

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
    
    ll n,m;
    
    cin >> n >> m;
    
    for(int i=1;m*i<=n;i++){
        n++;
    }
    
    cout<< n << endl;
    
	return 0;
}
