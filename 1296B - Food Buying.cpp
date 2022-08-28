Output Status : 

By Rajakunalpandit, contest: Codeforces Round #617 (Div. 3), problem: (B) Food Buying, Accepted

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
    cin >> t;
    
    while(t--){
        
        ll n;
        cin >> n;
        
        ll res = 0;
        
        while(n > 9){
            
            ll x = n - n%10;
            res += x;
            n = n/10 + n%10;
        }
        cout<< res + n << endl;
    }
    

	return 0;
}
