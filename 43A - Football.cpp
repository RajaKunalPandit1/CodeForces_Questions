Output Status: 

By Rajakunalpandit, contest: Codeforces Beta Round #42 (Div. 2), problem: (A) Football, Accepted

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
    
    ll n;
    cin>> n;
    
    string arr[n];
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    sort(arr,arr+n);
    
    cout<< arr[n/2] << endl;
    
    
	return 0;
}





