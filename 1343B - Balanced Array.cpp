Output Status: 

By Rajakunalpandit, contest: Codeforces Round #636 (Div. 3), problem: (B) Balanced Array, Accepted

// #include <bits/stdc++.h>
#include <iostream>
#include <string>
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
        
        ll s1 = 0,s2 = 0;
        
        if(n%4!= 0){
            cout<< "NO" << endl;
        }else{
            cout<< "YES" << endl;
            
            for(int i=2;i<=n;i+=2){
                cout<< i << " ";
                s1 += i;
            }
            for(int i=1;i<n-2;i+=2){
                cout<< i << " ";
                s2 += i;
            }
            cout<< s1-s2 << endl;
        }
    }
    
	return 0;
}

