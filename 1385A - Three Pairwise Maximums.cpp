Output Status : 

By Rajakunalpandit, contest: Codeforces Round #656 (Div. 3), problem: (A) Three Pairwise Maximums, Accepted

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
        
        ll x,y,z;
        cin>> x >> y >> z;
        
        if(x>y){
            swap(x,y);
        }
        if(x>z){
            swap(x,z);
        }
        if(y > z){
            swap(y,z);
        }
    
        if(y == z){
            cout<< "YES" << endl;
            cout<< x << " " << x << " " << z << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }

    
	return 0;
}



