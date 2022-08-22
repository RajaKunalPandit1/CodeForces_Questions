Output Status : 

By Rajakunalpandit, contest: Educational Codeforces Round 122 (Rated for Div. 2), problem: (A) Div. 7, Accepted


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
        
        if(n%7 == 0){
            cout<< n << endl;
            continue;
        }
        
        int rem = n%10;
        
        int k = 9-rem;
        int o = n,flag = 0;
        
        while(k--){
            
            n++;
            if(n%7 == 0){
                flag = 1;
                break;
            }
        }
        
        if(flag){
            cout<< n << endl;
            continue;
        }
        
        while(rem--){
            
            o--;
            if(o%7 == 0){
                break;
            }
        }
        cout<< o << endl;
    }


	return 0;
}
