Output Status :

By Rajakunalpandit, contest: Codeforces Round #447 (Div. 2), problem: (A) QAQ, Accepted

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
    
    string str;
    cin >> str;
    
    ll n = str.length();
    
    ll res = 0;
    ll x = 0,y=0;
    
    for(int i=0;i<n;i++){
        if(str[i] == 'Q'){
            res += x;
            y++;
        }else if(str[i] == 'A'){
            x += y;
        }
    }
    
    cout<< res << endl;

	return 0;
}

