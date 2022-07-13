Output Status:

By Rajakunalpandit, contest: Codeforces Round #320 (Div. 2) [Bayan Thanks-Round], problem: (A) Raising Bacteria, Accepted

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
    
    ll x;
    cin >> x;
    
    ll count = 0;
    
    while(x/2 != 0){
        
        if(x%2 == 1){
            count++;
        }
        x = x/2;
    }
    
    cout<< count +1 << endl;
    
    
	return 0;
}





