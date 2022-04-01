Output Status: 

By Rajakunalpandit, contest: Codeforces Round #638 (Div. 2), problem: (A) Phoenix and Balance, Accepted

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
        ll k=0;
        
        for(int i=1;i<=n;i++){
            arr[k++] = pow(2,i);
        }
        
        ll sum1 = arr[n-1];
        
        ll var = n/2;
        
        for(int i=0;i<=var-2;i++){
            sum1 += arr[i];
        }
        
        ll sum2 = 0;
        
        for(int i=var-1;i<n-1;i++){
            sum2 += arr[i];
        }
        
        cout<< abs(sum2-sum1) << endl;
        
    }

    
	return 0;
}



