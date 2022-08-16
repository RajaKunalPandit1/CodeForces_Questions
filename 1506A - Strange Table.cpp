Output Status : 

By Rajakunalpandit, contest: Codeforces Round #710 (Div. 3), problem: (A) Strange Table, Accepted

#include <bits/stdc++.h>
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
        
        ll n,m,x;
        cin>> n >> m >> x;
        
        ll col = (x/n);
        if(x%n != 0)col++;
        ll row = x%n;
        if(row == 0)row = n;
        
        ll res = ((row-1)*m)+col;
        cout<< res << endl;
    }

	return 0;
}
