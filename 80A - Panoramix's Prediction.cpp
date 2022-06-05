Output Status: 

By Rajakunalpandit, contest: Codeforces Beta Round #69 (Div. 2 Only), problem: (A) Panoramix's Prediction, Accepted


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


bool isprime(int n){
    
    if(n == 1){
        return false;
    }
    if(n == 2 || n==3){
        return true;
    }
    if(n%2 == 0 || n%3 == 0){
        return false;
    }
    
    for(int i=5;i*i<=n;i+=6){
        
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll n,m;
    cin>> n >> m;
    
    bool flag = true;
    
    for(int i=n+1;i<m;i++){
        if(isprime(i)){
           flag = false;
           break;
        }
    }
    if(!isprime(m)){
        flag = false;
    }
    
    if(flag){
        cout<< "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
	return 0;
}



