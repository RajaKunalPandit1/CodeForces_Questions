Output Status: 

By Rajakunalpandit, contest: Codeforces Beta Round #4 (Div. 2 Only), problem: (C) Registration System, Accepted


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
    
    ll n;
    cin>> n;
    
    string str[n];
    
    for(int i=0;i<n;i++){
        cin>> str[i];
    }
    
    map<string,int> mp;
    
    for(int i=0;i<n;i++){
        mp[str[i]]++;
        if(mp[str[i]] > 1){
            int var = mp[str[i]];
            // str[i] += (var-'0');
            cout<< str[i] << var-1 << endl;
            // cout<< str[i] << endl;
            // mp[str[i]]++;
        }else{
            cout<< "OK" << endl;
        }
    }
    
    
	return 0;
}



