Output Status : 

By Rajakunalpandit, contest: Codeforces Round #615 (Div. 3), problem: (A) Collecting Coins, Accepted


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
        
        ll arr[3],n;
        
        for(int i=0;i<3;i++){
            cin>> arr[i];
        }
        cin>> n;
        
        sort(arr,arr+3);
        
        ll diff = arr[2] - arr[0];
        diff += arr[2] - arr[1];
        
        if(n>=diff){
            n -= diff;
            if(n%3 == 0){
                cout<< "YES" << endl;
            }else{
                cout<< "NO" << endl;
            }
        }else{
            cout<< "NO" << endl;
        }
    }

    
	return 0;
}



