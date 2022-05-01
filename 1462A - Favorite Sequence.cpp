Output Status: 

By Rajakunalpandit, contest: Codeforces Round #690 (Div. 3), problem: (A) Favorite Sequence, Accepted

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
        
        ll n;
        cin>> n;
        
        ll arr[n];
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        for(int i=0;i<n/2;i++){
            cout<< arr[i] << " " << arr[n-i-1] << " ";
        }
        
        if(n%2 !=0 ){
            cout<< arr[n/2];
        }
        cout<< endl;
    }

    
	return 0;
}



