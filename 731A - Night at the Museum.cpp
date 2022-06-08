Output Status: 

By Rajakunalpandit, contest: Codeforces Round #376 (Div. 2), problem: (A) Night at the Museum, Accepted


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
    
    string str;
    cin>> str;
    
    ll res = 0;
    ll start = 0;
    
    for(int i=0;i<str.length();i++){
        
        ll idx = str[i]-'a';
        ll walk = abs(start - idx);
        
        if(walk < 13){
            res += walk;
        }else{
            res += 26-walk;
        }
        start = idx;
    }
    cout<< res << endl;
    
	return 0;
}



