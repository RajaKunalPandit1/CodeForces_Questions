Output Status : 

By Rajakunalpandit, contest: Codeforces Round #650 (Div. 3), problem: (B) Even Array, Accepted

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
        
        ll c= 0,flag = 0;
        
        ll odd = 0,even = 0;
        for(int i=0;i<n;i++){
            if(i%2 != arr[i]%2){
                
                if(arr[i] % 2 == 1){
                    odd++;
                }else{
                    even++;
                }
            }
            
        }
            if(odd != even){
                cout<< -1 << endl;
            }else{
                cout << even << endl;
            }
        
    }
    

	return 0;
}
