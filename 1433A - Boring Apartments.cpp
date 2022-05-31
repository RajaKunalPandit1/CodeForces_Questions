Output Status: 

By Rajakunalpandit, contest: Codeforces Round #677 (Div. 3), problem: (A) Boring Apartments, Accepted


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
        
        ll x;
        cin>> x;
        
        ll res = 0;
        bool flag = true;
        
        for(int i=1;i<10;i++){
            
            ll start = i;
            
            while(start<= 9999){
                
                if(start == x){
                    res+= floor((log10(start))+1);
                    flag = false;
                    break;
                }else{
                    res+= floor((log10(start))+1);
                    start = (start*10) + i;
                }
            }
            if(!flag){
                break;
            }
        }
        cout<< res << endl;
    }
    
	return 0;
}
