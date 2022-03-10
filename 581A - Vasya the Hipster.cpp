Output Status: 

By Rajakunalpandit, contest: Codeforces Round #322 (Div. 2), problem: (A) Vasya the Hipster, Accepted


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
    
    ll a,b;
    
    cin >> a >> b;
    
    ll res1 = 0,res2 = 0;
    
    res1 = min(a,b);
    
    ll diff = 0;
    
    if(a>b){
        diff = a-b;
    }else{
        diff = b-a;
    }
    
    if(diff/2 >=1){
        res2 = diff/2;
    }else{
        res2 = 0;
    }
    
    cout<< res1 << " " << res2 << endl;
    
	return 0;
}

