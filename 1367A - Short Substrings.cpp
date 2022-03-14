Output Status: 

By Rajakunalpandit, contest: Codeforces Round #650 (Div. 3), problem: (A) Short Substrings, Accepted


// #include <bits/stdc++.h>
#include <iostream>
#include <string>
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
        
        string a,b;
        cin>> b;
        
        if(b.size() == 2){
            cout<< b << endl;
        }else{
            a += b[0];
            for(int i=2;i<b.size()-1;i++){
                if(b[i]==b[i-1]){
                    a+= b[i];
                    i++;
                }
            }
            a+= b[b.size()-1];
            cout<< a << endl;
        }
    }
    
    
	return 0;
}




