Output Status: 

By Rajakunalpandit, contest: Codeforces Round #186 (Div. 2), problem: (A) Ilya and Bank Account, Accepted

// #include <bits/stdc++.h>
#include <iostream>
#include <string>
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
    cin >> n;
    
    if(n>0){
        cout<< n << endl;
    }else{
        ll rem1=0,rem2 =0;
        ll temp = -n;
        
        rem1 = temp%10;
        temp = temp/10;
        rem2 = temp%10;
        temp = temp/10;
        
        if(rem1>rem2){
            temp = temp*10 + (rem2);
        }else{
            temp = temp*10 + (rem1);
        }
        cout<< -(temp) << endl;
    }
    
	return 0;
}

