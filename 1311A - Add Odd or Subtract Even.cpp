Output Status: 

By Rajakunalpandit, contest: Codeforces Round #624 (Div. 3), problem: (A) Add Odd or Subtract Even, Accepted


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
        
        ll a, b;
        cin>> a >> b;
        
        int diff = b - a;
        if(diff == 0 ){
            cout << 0 << endl ;
        }
        else if(diff > 0){
            if(diff&1) cout << 1 << endl ;
            else cout << 2 << endl ;
        }
        else{
            if(diff&1) cout << 2 << endl ;
            else cout << 1 << endl ;
        }
        
    }

    
	return 0;
}



