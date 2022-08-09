Output Status : 

By Rajakunalpandit, contest: Codeforces Round #481 (Div. 3), problem: (B) File Name, Accepted

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
    
    
    ll n;
    cin>> n;
    
    string str;
    cin >> str;
    
    bool flag = false;
    ll cnt = 0,res =0;
    
    for(int i=1;i<n;i++){
        
        if(flag && str[i] == 'x'){
            cnt++;
        }
        if(str[i-1] == 'x' && str[i] == 'x'){
            flag = true;
        }
        if(str[i] != 'x'){
            flag = false;
        }
    }
    cout << cnt << endl;
    
	return 0;
}





