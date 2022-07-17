Output Status : 

By Rajakunalpandit, contest: Codeforces Round #644 (Div. 3), problem: (A) Minimal Square, Accepted

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
        
        ll a,b;
        cin>> a >> b;
        
        if(a>b) swap(a,b);
        
        cout<< max(a*2,b) * max(a*2,b) << endl;
        
    }

	return 0;
}
