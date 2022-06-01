Output Status:

By Rajakunalpandit, contest: Codeforces Round #247 (Div. 2), problem: (A) Black Square, Accepted

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
    
    ll arr[4];
    for(int i=0;i<4;i++){
        cin>> arr[i];
    }
    
    string str;
    cin>> str;
    
    ll res = 0;
    
    for(int i=0;i<str.length();i++){
        
        if(str[i] == '1'){
            res += (arr[0]);
        }else if(str[i] == '2'){
            res += (arr[1]);
        }else if(str[i] == '3'){
            res += arr[2];
        }else{
            res += arr[3];
        }
    }
    
    cout<< res << endl;
    
	return 0;
}



