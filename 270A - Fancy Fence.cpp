Output Status : 


By Rajakunalpandit, contest: Codeforces Round #165 (Div. 2), problem: (A) Fancy Fence, Accepted

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
    cin >> t;
    
    while(t--){
        
        ll a;
        cin>> a;
        
        if(360 % (180-a) == 0){
            cout<< "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }
        
    }

    
	return 0;
}
