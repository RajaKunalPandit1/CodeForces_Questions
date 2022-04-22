Output Status: 

By Rajakunalpandit, contest: Codeforces Round #674 (Div. 3), problem: (A) Floor Number, Accepted

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
        
        ll n,x;
        cin>> n >> x;
        
        ll c = 2,res = 1;
        
        while(c<n){
            c+= x;
            res++;
        }
        cout<< res << endl;
    }

    
	return 0;
}



