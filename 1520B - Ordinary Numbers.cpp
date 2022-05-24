Output Status: 

By Rajakunalpandit, contest: Codeforces Round #719 (Div. 3), problem: (B) Ordinary Numbers, Accepted

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
        ll res = 0,start;
        
        for(int i=1;i<=9;i++){
           start = i;
            while(start<=n){
                res++;
                start = start*10 + i;
            }
        }
        cout<< res << endl;
        
    }

    
	return 0;
}
