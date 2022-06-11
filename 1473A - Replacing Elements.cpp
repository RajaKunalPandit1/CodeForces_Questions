Output Status : 

By Rajakunalpandit, contest: Educational Codeforces Round 102 (Rated for Div. 2), problem: (A) Replacing Elements, Accepted

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
        
        ll n,d;
        cin>> n >> d;
        
        ll arr[n];
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        vector<int> v1;
        vector<int> v2;
        
        for(int i=0;i<n;i++){
            if(arr[i] <= d){
                v1.push_back(arr[i]);
            }else{
                v2.push_back(arr[i]);
            }
        }
        
        if(v2.size() == 0){
            cout<< "YES" << endl;
        }else{
            
            sort(v1.begin(),v1.end());
            
            if(v1.size()>=2){
                if(v1[0] + v1[1] <= d){
                cout<< "YES" << endl;
                }else{
                    cout<< "NO" << endl;
                }    
            }else{
                cout<< "NO" << endl;
            }
        }
    }
	return 0;
}
