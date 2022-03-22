Output Status: 

By Rajakunalpandit, contest: Codeforces Round #697 (Div. 3), problem: (A) Odd Divisor, Accepted


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
        
        if(ceil(log2(n)) == floor(log2(n))){
            cout << "NO" << endl;
        }else{
            cout<< "YES" << endl;
        }
    }
    
	return 0;
}


