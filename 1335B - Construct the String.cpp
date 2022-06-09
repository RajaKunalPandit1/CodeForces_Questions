Output Status : 

By Rajakunalpandit, contest: Codeforces Round #634 (Div. 3), problem: (B) Construct the String, Accepted


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
        
        ll n,a,b;
    cin>> n >> a >> b;
    
    char arr[2*a];
    ll A = a;
    ll j = 0;
    
    while(a>0){
        
        for(ll i=97;i<97+b;i++){
            arr[j++] = (char) i;
        }
        a = a-b;
    }
    
    a = A;
    
    while(n>0){
        
        if(n-a>=0){
            for(int i=0;i<a;i++){
                cout<< arr[i];
            }
        }else{
            ll var = n;
            for(int i=0;i<var;i++){
                cout<< arr[i];
            }
            break;
        }
        n = n-a;
    }
    cout<< endl;
        
    }
    
    
    
	return 0;
}



