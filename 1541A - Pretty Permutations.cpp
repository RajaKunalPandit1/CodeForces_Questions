Output Status : 

By Rajakunalpandit, contest: Codeforces Round #728 (Div. 2), problem: (A) Pretty Permutations, Accepted


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
        
         bool check = false;

    if(n & 1){
      for(int i = 1; i <= n; i++){
        check = !check;
        if(i == n-2){
          cout<<i+1<<" ";
          continue;
        }
        if(i == n-1){
          cout<<i+1<<" ";
          continue;
        }
        if(i == n){
          cout<<i-2<<" ";
          continue;
        }
        if(check){
          cout<<i+1<<" ";
        }
        else{
          cout<<i-1<<" ";
        }
      }
    }
    else{
      for(int i = 1; i <= n; i++){
        check = !check;
        if(check){
          cout<<i+1<<" ";
        }
        else{
          cout<<i-1<<" ";
        }
      }
    }
    cout<<endl;
        
    }

	return 0;
}
