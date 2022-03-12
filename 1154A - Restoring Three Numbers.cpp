Output Status: 

By Rajakunalpandit, contest: Codeforces Round #552 (Div. 3), problem: (A) Restoring Three Numbers, Accepted


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
    
    ll arr[4];
    
    for(int i=0;i<4;i++){
        cin>> arr[i];
    }
    
    sort(arr,arr+4);
    
    ll res1=0,res2 =0,res3=0;
    
    
    res1 = arr[3]-arr[0];
    res2 = arr[3]-arr[1];
    res3 = arr[3]-arr[2];
    
    cout<< res1 << " " <<  res2 << " " <<  res3 <<endl;
    
    
    
    
	return 0;
}


