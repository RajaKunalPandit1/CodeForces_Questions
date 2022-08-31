Output Status :

By Rajakunalpandit, contest: Educational Codeforces Round 94 (Rated for Div. 2), problem: (A) String Similarity, Accepted

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
    cin>> t;
    
    while(t--){
        
        ll n;
        cin >> n;
        
        string str;
        cin >> str;
        
        for(int i=0;i<2*n-1;i+=2){
            cout<< str[i];
        }
        cout<< endl;
    }
    
	return 0;
}
