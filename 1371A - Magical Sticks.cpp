Output Status:

By Rajakunalpandit, contest: Codeforces Round #654 (Div. 2), problem: (A) Magical Sticks, Accepted

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
        
        ll n;
        cin>> n;
        
        ll ans = n/2;
        
        if(n%2 == 1){
            ans++;
        }
        cout<< ans << endl;
    }

    
	return 0;
}



