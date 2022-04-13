Output Status:

By Rajakunalpandit, contest: Educational Codeforces Round 110 (Rated for Div. 2), problem: (A) Fair Playoff, Accepted

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


int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll t;
    cin>> t;
    
    while(t--){
        
        ll arr[4];
        for(int i=0;i<4;i++){
            cin>> arr[i];
        }
        
        int max1 = max(arr[0],arr[1]);
        int min1 = min(arr[2],arr[3]);
        
        int min2 = min(arr[0],arr[1]);
        int max2 = max(arr[2],arr[3]);
        
        if(max1 < min1){
            cout<< "NO" << endl;
        }else if(min2 > max2){
            cout<< "NO" << endl;
        }else{
            cout<< "YES" << endl;
        }
        
    }
    
	return 0;
}



