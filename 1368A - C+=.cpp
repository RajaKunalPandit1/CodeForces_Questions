Output Status: 

By Rajakunalpandit, contest: Codeforces Global Round 8, problem: (A) C+=, Accepted

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
        
        ll a,b,c;
        
        cin>> a >> b >> c;
        
        ll sum = 0;
        ll res = 0;
        while(sum <= c){
            if(b>a){
                a += b;
                sum = a;
                res++;
            }else{
                b += a;
                sum = b;
                res++;
            }
            if(sum > c){
                break;
            }
        }
        cout<< res << endl;
        
    }

	return 0;
}




