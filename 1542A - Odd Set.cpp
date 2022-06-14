Output Status : 

By Rajakunalpandit, contest: Codeforces Round #729 (Div. 2), problem: (A) Odd Set, Accepted


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
        
        ll arr[2*n];
        
        for(int i=0;i<2*n;i++){
            cin>> arr[i];
        }
        
        ll odd=0,even = 0;
        
        for(int i=0;i<2*n;i++){
            if(arr[i]%2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        
        if(even == odd){
            cout<< "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }
        
        
    }

    
	return 0;
}



