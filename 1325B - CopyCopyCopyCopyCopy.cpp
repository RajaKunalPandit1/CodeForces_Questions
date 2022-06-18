Output Status : 

By Rajakunalpandit, contest: Codeforces Round #628 (Div. 2), problem: (B) CopyCopyCopyCopyCopy, Accepted


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
        
        ll n;
        cin>> n;
        
        ll arr[n];
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        unordered_set<int> st;
        
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
        cout << st.size() << endl;
    }

    
	return 0;
}





