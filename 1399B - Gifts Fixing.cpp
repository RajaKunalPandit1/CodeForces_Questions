Output Status: 

By Rajakunalpandit, contest: Codeforces Round #661 (Div. 3), problem: (B) Gifts Fixing, Accepted


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
    cin >> t;
    
    while(t--){
        
        ll n;
        cin >> n;
        
        ll arr[n],brr[n];
        
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        for(int i=0;i<n;i++){
            cin>> brr[i];
        }
        
        int min_a = *min_element(arr,arr+n);
        int min_b = *min_element(brr,brr+n);
        
        ll res =0;
        
        for(int i=0;i<n;i++){
            
            ll d1 = arr[i]-min_a;
            ll d2 = brr[i]-min_b;
            
            res += max(d1,d2);
        }
        
        cout<< res << endl;
        
    }
    
	return 0;
}

