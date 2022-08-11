Output Status : 

By Rajakunalpandit, contest: Codeforces Round #797 (Div. 3), problem: (A) Print a Pedestal (Codeforces logo?), Accepted

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
        
        cout<< (n+1)/3 << " " << (n+2)/3+1 << " " << (n)/3-1 << endl;
        
    }


	return 0;
}

