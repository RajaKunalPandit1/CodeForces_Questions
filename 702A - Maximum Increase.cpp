Output Status : 

By Rajakunalpandit, contest: Educational Codeforces Round 15, problem: (A) Maximum Increase, Accepted

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
    
    ll n;
    cin>> n;
    
    ll arr[n];
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    ll cnt = 1,res = 1;
    
    for(int i=1;i<n;i++){
        
        if(arr[i]>arr[i-1]){
            cnt ++;
            res = max(res,cnt);
        }else{
            cnt = 1;
        }
    }
    cout<< res << endl;
    
	return 0;
}



