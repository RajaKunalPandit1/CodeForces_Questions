Output Status: 

By Rajakunalpandit, contest: Codeforces Round #375 (Div. 2), problem: (A) The New Year: Meeting Friends, Accepted


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
    
    ll arr[3];
    
    for(int i=0;i<3;i++){
        cin>> arr[i];
    }
    
    sort(arr,arr+3);
    
    ll res = 0;
    
    res += (arr[1]-arr[0]);
    res += (arr[2]-arr[1]);
    
    cout<< res << endl;
    
	return 0;
}



