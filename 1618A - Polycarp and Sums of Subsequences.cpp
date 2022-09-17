Output Status : 

By Rajakunalpandit, contest: Codeforces Round #760 (Div. 3), problem: (A) Polycarp and Sums of Subsequences, Accepted


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
    cin >> t;
    
    while(t--){
        
        ll arr[7];
        
        for(int i=0;i<7;i++){
            cin >> arr[i];
        }
        
        cout<< arr[0] << " " << arr[1] << " " << arr[6] - arr[0] - arr[1] << endl;

    }
    

	return 0;
}
