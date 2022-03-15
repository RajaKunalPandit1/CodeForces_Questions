Output Status: 

By Rajakunalpandit, contest: Codeforces Round #246 (Div. 2), problem: (A) Choosing Teams, Accepted


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

bool canParticipate(ll arr[],ll i, ll k){
    bool flag = true;
    
    for(ll j=i;j<i+3;j++){
        arr[j] += k;
        if(arr[j]>5){
            flag = false;
            break;
        }
    }
    return flag;
}

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll n,k;
    
    cin>> n >> k;
    
    ll arr[n];
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    sort(arr,arr+n);
    
    ll res = 0;
    bool flag = true;
    
    
    for(ll i=0;i<=n-3;i+=3){
        
        if(canParticipate(arr,i,k) == true){
            res++;
        }
    }
    
    cout<< res << endl;
    
    
    
    
	return 0;
}


