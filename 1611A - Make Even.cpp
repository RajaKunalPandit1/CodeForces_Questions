Output Status : 

By Rajakunalpandit, contest: Codeforces Round #756 (Div. 3), problem: (A) Make Even, Accepted

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
        
        string str;
        cin>> str;
        
        int n = str.size();
        
        int res = -1;
        
        if((str[n-1]-'0')%2 == 0){
            res = 0;
        }else if((str[0] - '0')%2 == 0){
            res = 1;
        }else{
            bool flag = false;
            
            for(int i=0;i<n;i++){
                
                if((str[i]-'0')%2 == 0){
                    flag = true;
                    break;
                }
            }
            if(flag){
                res = 2;
            }
        }
        cout<< res << endl;
    }

	return 0;
}
