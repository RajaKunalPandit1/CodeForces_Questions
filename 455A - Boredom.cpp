Output Status : 

By Rajakunalpandit, contest: Codeforces Round #260 (Div. 1), problem: (A) Boredom, Accepted

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
    
    ll v[n];
    
    ll m = 0;
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		m = max(m,v[i]);
	}
	ll cnt[100005] = {0};
	for(int i = 0; i < n; i++) cnt[v[i]]++;
	ll dp[100005];
	dp[0] = 0;
	dp[1] = cnt[1];
	for(int i = 2; i <= m; i++){
		dp[i] = max(dp[i-1],i*cnt[i] + dp[i-2]);
	}
	cout << dp[m] << "\n";
    
    

	return 0;
}
