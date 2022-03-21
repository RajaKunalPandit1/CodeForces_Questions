Output Status: 

By Rajakunalpandit, contest: Codeforces Round #644 (Div. 3), problem: (B) Honest Coach, Accepted


// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <climits>
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
        
        ll arr[n];
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        sort(arr,arr+n);
        
        ll res = INT_MAX;
        
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1] < res){
                res = arr[i] - arr[i-1];
            }
        }
        
        cout<< res << endl;
        
    }
    
	return 0;
}

