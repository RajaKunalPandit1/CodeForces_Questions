Output Status: 

By Rajakunalpandit, contest: Codeforces Round #661 (Div. 3), problem: (A) Remove Smallest, Accepted


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
    
    ll t;
    cin>> t;
    
    while(t--){
        
        ll n;
        cin>> n;
        
        vector<ll> res;
        ll arr[n];
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        if(n == 1){
            cout<< "YES" << endl;
            continue;
        }
        
        sort(arr,arr+n);
        
        for(int i=1;i<n;i++){
            res.push_back(abs(arr[i] - arr[i-1]));
        }
        
        sort(res.begin(),res.end(),greater<int>());
        
        if(res[0] > 1){
            cout << "NO" << endl;
        }else{
            cout<< "YES" << endl;
        }
        
    }
   
	return 0;
}

