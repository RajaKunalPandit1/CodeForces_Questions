Output Status: 

By Rajakunalpandit, contest: Codeforces Beta Round #32 (Div. 2, Codeforces format), problem: (B) Borze, Accepted

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
    
    string s;
    cin>> s;
    
    string res;
    bool flag = true;
    
    int n = s.length();
    
    for(int i=0;i<n;){
        if(s[i] == '.'){
            res += '0';
            i++;
        }else if(s[i] == '-' && s[i+1] == '.'){
            res += '1';
            i += 2;
        }else if(s[i] == '-' && s[i+1] == '-'){
            res += '2';
            i += 2;
        }
    }
    cout<< res << endl;
	return 0;
}



