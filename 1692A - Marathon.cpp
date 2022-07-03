Output Status : 

By Rajakunalpandit, contest: Codeforces Round #799 (Div. 4), problem: (A) Marathon, Accepted


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
        
        ll arr[4];
        
        for(int i=0;i<4;i++){
            cin>> arr[i];
        }
        
        ll res = 0;
        for(int i=1;i<4;i++){
            if(arr[i] > arr[0]){
                res++;
            }
        }
        cout<< res << endl;
        
    }
    

	return 0;
}
