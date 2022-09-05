Output Status : 

By Rajakunalpandit, contest: Codeforces Round #805 (Div. 3), problem: (A) Round Down the Price, Accepted

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
        ll m;
        cin >> m;
        
        string str = to_string(m);
        string s = "1";
        
        for(int i=1;i<str.length();i++){
            s += '0';
        }
        
        int k = stoi(s);
        cout<< m-k << endl;
   }
    
	return 0;
}
