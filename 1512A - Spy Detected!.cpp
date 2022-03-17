Output Status: 

By Rajakunalpandit, contest: Codeforces Round #713 (Div. 3), problem: (A) Spy Detected!, Accepted


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
        
        ll arr[n];
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        for(int i=1;i<n-1;i++){
            if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
                cout<< i+1 << endl;
                break;
            }else if(arr[0] != arr[1] && arr[1] == arr[2]){
                cout<< 1 << endl;
                break;
            }else if(arr[n-1] != arr[n-2] && arr[n-2] == arr[n-3]){
                cout<< n << endl;
                break;
            }
        }
        
        
    }
    
	return 0;
}

