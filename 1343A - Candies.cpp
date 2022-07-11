Output Status : 

By Rajakunalpandit, contest: Codeforces Round #636 (Div. 3), problem: (A) Candies, Accepted


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
        cin>> n;
        
        ll m = 1;
        
        for(int i=0;i<50;i++){
            
            m = 2*m+1;
            
            if(n%m){
                continue;
            }else{
                cout<< n/m << endl;
                break;
            }
            
        }
        
    }

	return 0;
}
