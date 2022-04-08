Output Status: 

By Rajakunalpandit, contest: Codeforces Beta Round #9 (Div. 2 Only), problem: (A) Die Roll, Accepted

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
    
    ll y,w;
    cin>> y >> w;
    
    const string probab[7] = {"","1/1","5/6","2/3","1/2","1/3","1/6"};
    ll idx = max(y,w);
    
    cout<< probab[idx] << endl;
    
    
    
	return 0;
}
