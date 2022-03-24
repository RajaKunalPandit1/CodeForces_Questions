Output Status: 

By Rajakunalpandit, contest: Good Bye 2013, problem: (A) New Year Candles, Accepted

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
    
    ll a,b;
    
    cin>> a >> b;
    
    ll res = a;
    
    while(a >= b){
        
        res += (a/b);
        a = (a/b) + (a%b);
        
    }
    
    cout<< res << endl;
    
	return 0;
}



