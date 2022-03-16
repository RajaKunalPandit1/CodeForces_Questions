Output Status: 

By Rajakunalpandit, contest: Codeforces Round #367 (Div. 2), problem: (B) Interesting drink, Accepted


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
    
    ll arr[n];
    
    for(ll i=0;i<n;i++){
        cin>> arr[i];
    }
    
    sort(arr,arr+n);
    
    ll q;
    cin>> q;
    
    while(q--){
        ll m;
        cin>> m;
        
        ll res = upper_bound(arr,arr+n,m)-arr;
        cout<< res << endl;
        
    }
    
    
	return 0;
}

