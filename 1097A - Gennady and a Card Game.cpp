Output Status: 

By Rajakunalpandit, contest: Hello 2019, problem: (A) Gennady and a Card Game, Accepted

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
    
    string str;
    cin>> str;
    
    string s2[5];
    
    for(int i=0;i<5;i++){
        cin>> s2[i];
    }
    
    bool flag = false;
    
    for(int i=0;i<5;i++){
        string s = s2[i];
        
        if(str[0] == s[0] || str[1] == s[0] || str[0] == s[1] || str[1] == s[1]){
            flag = true;
            break;
        }
    }
    
    if(flag){
        cout<< "YES" << endl;
    }else{
        cout<< "NO" << endl;
    }
   
	return 0;
}



