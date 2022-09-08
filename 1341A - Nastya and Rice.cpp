Output Status : 

By Rajakunalpandit, contest: Codeforces Round #637 (Div. 2) - Thanks, Ivan Belonogov!, problem: (A) Nastya and Rice, Accepted

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
            
        ll n,a,b,c,d;
        
        cin >> n >> a >> b >> c >> d;
        
        ll ABsum = a+b;
        ll ABsub = a-b;
        
        ll CDsum = c+d;
        ll CDsub = c-d;
        
        if((n*ABsum >= CDsub) && (n*ABsub <= CDsum)){
            cout<< "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }
    }
    

	return 0;
}
