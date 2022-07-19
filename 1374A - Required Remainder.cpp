Output Status : 

By Rajakunalpandit, contest: Codeforces Round #653 (Div. 3), problem: (A) Required Remainder, Accepted

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
        
        ll x,y,n;
        cin>> x >> y >> n;
        
        ll res = 0;
        res = n-n%x + y;
        
        if(res <=n){
            cout<< res << endl;
        }else{
            cout<< (n-n%x-(x-y)) << endl;
        }
        
    }
    

	return 0;
}
