Output Status : 

By Rajakunalpandit, contest: Codeforces Beta Round #34 (Div. 2), problem: (B) Sale, Accepted


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
    
    ll n,m;
    cin>> n >> m;
    
    ll arr[n];
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    sort(arr,arr+n);
    
    ll res =0 ;
    int j=0;
    while(j<m){
        if(arr[j]<0){
            res += abs(arr[j]);
        }
        j++;
    }
    cout<< res << endl;
    
	return 0;
}



