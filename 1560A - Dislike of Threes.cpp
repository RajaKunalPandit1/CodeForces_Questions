Output Status : 

By Rajakunalpandit, contest: Codeforces Round #739 (Div. 3), problem: (A) Dislike of Threes, Accepted

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
    
    ll res = 1;
    
    while(t--){
        
        ll k;
        cin >> k;
        
        for(int i=1;;i++){
            
            if(i%3 == 0 || i%10 == 3){
                continue;
            }else{
                k--;
                if(k == 0){
                    res = i;     
                    break;
                }
            } 
        }
        cout<< res << endl;
        
    }
    
	return 0;
}





