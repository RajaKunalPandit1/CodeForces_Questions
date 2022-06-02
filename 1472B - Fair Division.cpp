Output Status: 

By Rajakunalpandit, contest: Codeforces Round #693 (Div. 3), problem: (B) Fair Division, Accepted


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
    cin>> t;
    
    while(t--){
        
        ll n;
        cin >> n;
        
        ll arr[n];
        ll one = 0,sum = 0;
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
            sum += arr[i];
            if(arr[i] == 1){
                one++;
            }
        }
        
        ll temp = sum/2;
        
        if(sum%2 !=0){
            cout<< "NO" << endl;
            // return 0;
        }else if(temp & 1 && one<2){
            cout<< "NO" << endl;
        }else{
            cout<< "YES" << endl;
        }
        
    }
	return 0;
}



