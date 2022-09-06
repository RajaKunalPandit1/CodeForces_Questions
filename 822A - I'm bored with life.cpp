Output Status : 

By Rajakunalpandit, contest: Codeforces Round #422 (Div. 2), problem: (A) I'm bored with life, Accepted

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
    
    ll a,b;
    cin >> a >> b;
    
    ll x = min(a,b);
    ll k = 1;
    
    while(x!=0){
        k *= x;
        x--;
    }
    cout<< k << endl;

	return 0;
}





