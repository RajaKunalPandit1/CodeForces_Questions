Output Status: 

By Rajakunalpandit, contest: Codeforces Round #392 (Div. 2), problem: (A) Holiday Of Equality, Accepted


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
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    ll res = 0;
    
    sort(arr,arr+n);
    
    for(int i=0;i<n-1;i++){
        res += (arr[n-1]-arr[i]);
    }
    
    cout<< res << endl;
    
    
	return 0;
}

