Output Status : 

By Rajakunalpandit, contest: Codeforces Round #260 (Div. 2), problem: (A) Laptops, Accepted

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
    cin>> n;
    
    ll arr,brr;
    
    for(int i=0;i<n;i++){
        cin >> arr >> brr;
        
        if(arr != brr){
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    
    cout<< "Poor Alex" << endl;
    
    return 0;
}
