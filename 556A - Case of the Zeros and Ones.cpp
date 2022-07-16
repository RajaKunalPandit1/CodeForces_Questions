Output Status :

By Rajakunalpandit, contest: Codeforces Round #310 (Div. 2), problem: (A) Case of the Zeros and Ones, Accepted

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
    
    ll n;
    cin >> n;
    
    string str;
    cin>> str;
    
    ll one=0,zero = 0;
    
    for(int i=0;i<n;i++){
        
        if(str[i] == '1'){
            one++;
        }else{
            zero++;
        }
    }
    
    cout<< abs(one-zero) << endl;
    

	return 0;
}





