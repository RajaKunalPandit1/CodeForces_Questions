Output Status: 

By Rajakunalpandit, contest: Codeforces Round #365 (Div. 2), problem: (A) Mishka and Game, Accepted


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
    
    ll m[n],c[n];
    
    for(int i=0;i<n;i++){
        cin>> m[i] >> c[i];
    }
    
    ll mis=0,chr=0;
    
    for(int i=0;i<n;i++){
        if(m[i]>c[i]){
            mis++;
        }else if(m[i]<c[i]){
            chr++;
        }else{
            continue;
        }
    }
    
    if(mis > chr){
        cout<< "Mishka" << endl;
    }else if(chr > mis){
        cout<< "Chris" << endl;
    }else{
        cout<< "Friendship is magic!^^" << endl;
    }
    
    
	return 0;
}

