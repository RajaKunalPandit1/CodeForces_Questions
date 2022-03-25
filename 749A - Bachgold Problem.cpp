Output Status: 

By Rajakunalpandit, contest: Codeforces Round #388 (Div. 2), problem: (A) Bachgold Problem, Accepted


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
    
    ll n;
    cin>> n;
    
    if(n%2 == 1){
        n = n/2;
        n--;
        cout<< n+1 << endl << 3 << " ";
    }else{
        n =  n/2;
        cout<< n << endl;
    }
    
    for(int i=0;i<n;i++){
        cout<< 2 << " ";
    }
    cout<< endl;
    
	return 0;
}
