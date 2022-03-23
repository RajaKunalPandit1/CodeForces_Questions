Output Status: 

By Rajakunalpandit, contest: Codeforces Round #277.5 (Div. 2), problem: (C) Given Length and Sum of Digits..., Accepted


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
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))
using namespace std;


int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll m,s;
    
    cin>> m >> s;
    
    if(s == 0){
        cout<< (m==1 ? "0 0" : "-1 -1") << endl;
        return 0;
    }
    
    ll t;
    
    string a,b;
    
    for(int i=0;i<m;i++){
        t = min(s,9);
        a += t + '0';
        s -= t;
    }
    
    if(s> 0){
        cout<< "-1 -1" << endl; 
        return 0;
    }
    
    for(int i=m-1;i>=0;i--){
        b += a[i];
    }
    
    int j=0;
    for(j = 0; b[j] == '0';j++);
    
    b[j]--,b[0]++;
    
    cout<< b <<  " " << a << endl;
    
	return 0;
}



