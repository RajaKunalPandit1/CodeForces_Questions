Output Status: 

By Rajakunalpandit, contest: Good Bye 2016, problem: (A) New Year and Hurry, Accepted

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
    
    ll n,k;
    cin>> n >> k;
    
    ll cnt = 240,res=0;
    
    cnt -= k;
    
    for(int i=1;i<=n && cnt>=i*5 ;i++){
        ll var = i*5;
        cnt -= var;
        res++;
    }
   
    cout<< res << endl;
    
	return 0;
}


