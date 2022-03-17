Output Status: 

By Rajakunalpandit, contest: Codeforces Round #642 (Div. 3), problem: (B) Two Arrays And Swaps, Accepted


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
        
        ll n,k;
        cin>> n >> k;
        
        ll arr[n],brr[n];
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        for(int i=0;i<n;i++){
            cin>> brr[i];
        }
        
        sort(arr,arr+n);
        sort(brr,brr+n);
        
        for(int i=0;i<k;i++){
            if(arr[i] < brr[n-i-1]){
                swap(arr[i],brr[n-i-1]);
            }
        }
        
        ll res = 0;
        for(int i=0;i<n;i++){
            res += arr[i];
        }
        cout << res << endl;
    }
    
    
	return 0;
}

