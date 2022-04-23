Output Status:

By Rajakunalpandit, contest: Codeforces Round #762 (Div. 3), problem: (A) Square String?, Accepted

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
        
        string str;
        cin>> str;
        bool flag = true;
        
        if(str.length()%2 != 0){
            flag = false;
            // return;
        }else{
            for(int i=0;i<str.length()/2;i++){
                if(str[i] != str[i+str.length()/2]){
                    flag = false;
                    break;
                }
            }
            // cout<< "YES" << endl;
        }
        
        if(flag){
            cout<< "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }
        
    }

    
	return 0;
}



