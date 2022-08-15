Output Status : 

By Rajakunalpandit, contest: Codeforces Round #359 (Div. 2), problem: (A) Free Ice Cream, Accepted

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
    
    
    ll n,x,d,ans = 0;
    
    char c;
    
    cin >> n >> x;
    
    for(int i=0;i<n;i++){
        
        cin >> c >> d;
        
        if(c == '+'){
            x += d;
        }else if(d <= x){
            x -= d;
        }else{
            ans++;
        }
    }
    cout<< x << " " << ans << endl;

	return 0;
}
