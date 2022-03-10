Output Status: 

By Rajakunalpandit, contest: Codeforces Round #258 (Div. 2), problem: (A) Game With Sticks, Accepted


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
    
    ll n,m;
    cin>> n >> m;
    
    ll var;
    
    if(n>m){
        var = m;
    }else{
        var = n;
    }
    
    if(var%2 == 0){
        cout<< "Malvika" << endl;
    }else{
        cout<< "Akshat" << endl;
    }
    
	return 0;
}


