Output Status : 

By Rajakunalpandit, contest: Codeforces Round #702 (Div. 3), problem: (A) Dense Array, Accepted

#include <bits/stdc++.h>
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
        
        int cnt = 0;
        
        for(int i=0;i<n-1;i++){
            
            double minEle = min(arr[i],arr[i+1]);
            double maxEle = max(arr[i],arr[i+1]);
            
            while(maxEle/minEle > 2.0){
                maxEle = ceil(maxEle/2);
                cnt++;
            }
        }
        cout<< cnt << endl;
    }

	return 0;
}
