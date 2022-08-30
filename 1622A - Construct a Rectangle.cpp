Output Status : 

By Rajakunalpandit, contest: Educational Codeforces Round 120 (Rated for Div. 2), problem: (A) Construct a Rectangle, Accepted


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
        
        ll l1,l2,l3;
        
        cin >> l1 >> l2 >> l3;
        
        ll sum = l1 + l2 + l3;
        
        ll maxLen = max({l1,l2,l3});
        
        if(maxLen == (sum - maxLen)){
            cout<< "YES" << endl;
            // return 0;
        }else if(l1 == l2){
            cout<< ((l3%2 == 0)?"YES":"NO") << endl;
        }else if(l2 == l3){
            cout<< ((l1%2 == 0)?"YES":"NO") << endl;
        }else if(l1 == l3){
            cout<< ((l2%2 == 0)?"YES":"NO") << endl;
        }else{
            cout<< "NO" << endl;
        }
        
    }


	return 0;
}





