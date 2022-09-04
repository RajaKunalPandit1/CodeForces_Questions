Output Status : 

By Rajakunalpandit, contest: CodeCraft-22 and Codeforces Round #795 (Div. 2), problem: (A) Beat The Odds, Accepted


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
    cin >> t;
    
    while(t--){
        
        ll n;
        cin >> n;
        
        ll arr[n];
        
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        ll odd=0,even = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i]%2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        cout<< min(even,odd) << endl;
    }
    
    

	return 0;
}
