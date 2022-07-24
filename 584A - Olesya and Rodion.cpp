Output Status : 

By Rajakunalpandit, contest: Codeforces Round #324 (Div. 2), problem: (A) Olesya and Rodion, Accepted


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
    
    ll n,t;
    
    cin>> n >> t;
        
        if(n == 1 && t == 10){
            cout<< -1 << endl;
        }else if(n>=2 && t == 10){
            
            for(ll i=1;i<n;i++){
                cout<< 1;
            }
            cout<< 0 << endl;
        }else{
            for(ll i=1;i<=n;i++){
                cout<< t;
            }
            cout<< endl;
        }
    

	return 0;
}





