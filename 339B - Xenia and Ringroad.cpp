Output Status: 

By Rajakunalpandit, contest: Codeforces Round #197 (Div. 2), problem: (B) Xenia and Ringroad, Accepted


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
    
     ll n, m;
     
     cin>> n >> m;
     
     int arr[m];
     
     for(int i=0;i<m;i++){
         cin>> arr[i];
     }
     
     ll loc = 1;
     
     ll res = 0;
     
     for(int i=0;i<m;i++){
         if(arr[i] >= loc){
             res += arr[i]-loc;
         }else{
             res += n-(loc-arr[i]);
         }
         loc = arr[i];
     }
     
     cout<< res << endl;
    
	return 0;
}


