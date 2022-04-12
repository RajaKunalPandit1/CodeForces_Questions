Output Status: 

By Rajakunalpandit, contest: Codeforces Round #611 (Div. 3), problem: (A) Minutes Before the New Year, Accepted


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
        
        ll h,m;
        cin>> h >> m;
        
        ll res = 0;
        
        ll var = 23 - h;
        
        if(var >= 1){
            res += (var*60);
        }
        
        ll var2 = 60 - m;
        
        res += var2;
        
        cout<< res << endl;
    }
    
	return 0;
}



