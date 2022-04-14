Output Status : 

By Rajakunalpandit, contest: Codeforces Round #686 (Div. 3), problem: (A) Special Permutation, Accepted


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
    
    ll t;
    cin >> t;
    
    while(t--){
        
        ll n;
        cin>> n;
        
        vector<int> v(0,n);
        
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        
        if(n%2 == 0){
            sort(v.begin(),v.end(),greater<int>());
        }else{
            sort(v.begin(),v.end(),greater<int>());
            swap(v[ceil(n/2)],v[0]);
        }
        
        for(int i=0;i<n;i++){
            cout<< v[i] << " ";
        }
        cout<< endl;
    }

    
	return 0;
}



