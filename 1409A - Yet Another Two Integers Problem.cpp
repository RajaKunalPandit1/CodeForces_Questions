Output Status: 

By Rajakunalpandit, contest: Codeforces Round #667 (Div. 3), problem: (A) Yet Another Two Integers Problem, Accepted

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
    cin>> t;
    
    while(t--){
        
        ll a,b;
        cin>> a >> b;
        
        ll res = 0;
        
         if(a > b){
         swap(a,b);
        }
           
         res = (b-a)/10;
            if((b-a)%10>0){
                res++;
            }
        
        cout<< res << endl;
    }
    
	return 0;
}

