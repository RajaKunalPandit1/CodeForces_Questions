Output Status:

By Rajakunalpandit, contest: Codeforces Round #697 (Div. 3), problem: (B) New Year's Number, Accepted


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
        
        ll mod = n%2020;
        ll var = n/2020;
        
        if(mod <= var){
            cout << "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }   
    }   
	return 0;
}
