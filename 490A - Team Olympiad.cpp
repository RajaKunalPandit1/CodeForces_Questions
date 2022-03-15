Output Status:

By Rajakunalpandit, contest: Codeforces Round #279 (Div. 2), problem: (A) Team Olympiad, Accepted


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
    
    ll n;
    cin >> n;
    
    ll arr[n];
    ll res = 0;
    vector<ll> v;
    ll one=0,two=0,three=0;
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
        if(arr[i] == 1){
            one++;
        }else if(arr[i] == 2){
            two++;;
        }else{
            three++;
        }
    }
    
    res = min(one,min(two,three));
    cout << res << endl;
    
    while(res--){
        for(int i=0;i<n;i++){
            if(arr[i] == 1){
                cout<< i+1 << " ";
                arr[i] = -arr[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i] == 2){
                cout<< i+1 << " ";
                arr[i] = -arr[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i] == 3){
                cout<< i+1 << " ";
                arr[i] = -arr[i];
                break;
            }
        }
        
        cout<< endl;
    }
    
	return 0;
}

