Output Status:

By Rajakunalpandit, contest: Codeforces Round #693 (Div. 3), problem: (A) Cards for Friends, Accepted


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
        
        ll w,h,n;
        
        cin>> w >> h >> n;
        
        ll res = 1;
        
        // if(n == 1){
        //     cout<< 1 << endl;
        // }
        
        while(w%2 == 0){
            // res++;
            res *= 2;
            w = w/2;
        }
        
        while(h%2 == 0){
            res *= 2;
            h = h/2;
        }
        
        if(res>=n){
            cout<< "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }
        
    }

    
	return 0;
}



