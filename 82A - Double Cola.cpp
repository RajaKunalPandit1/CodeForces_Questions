Output Status : 

By Rajakunalpandit, contest: Yandex.Algorithm 2011: Qualification 2, problem: (A) Double Cola, Accepted

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
    
    ll r = 1;
    
    while(r*5<n){
        
        n -= r*5;
        r *= 2;
    }

    string names[] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
    
    cout<<  names[(n-1)/r] << endl;
    
	return 0;
}
