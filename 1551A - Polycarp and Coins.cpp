Output Status: 

By Rajakunalpandit, contest: Codeforces Round #734 (Div. 3), problem: (A) Polycarp and Coins, Accepted


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
    cin >> t;
    
    while(t--){
        
        ll n;
        cin>> n;
        
        ll one = 0,two = 0;
        
        
        if(n == 1){
            one++;
            cout<< one << " " << two << endl;
        }else if(n == 2){
            two++;
            cout<< one << " " << two << endl;
        }else{
            
            one = n/3;
            two = n/3;
            
            if(n%3 == 1){
                one ++;
            }else if(n%3 == 2){
                two++;
            }
            
            cout<< one << " " << two << endl;
            
        }
    }

    
	return 0;
}
