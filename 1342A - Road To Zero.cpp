Output Status : 

By Rajakunalpandit, contest: Educational Codeforces Round 86 (Rated for Div. 2), problem: (A) Road To Zero, Accepted

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
        
        ll x,y;
        cin >> x >> y;
        ll a,b;
        cin >> a >> b;        
        
        ll var1 = 0, var2 = 0;
        
        var1 = x*a + y*a;
        ll z = y-x;
        var2 = x*b + z*a;
        
        cout<< min(var2,var1) << endl;
        
    }

    
	return 0;
}
