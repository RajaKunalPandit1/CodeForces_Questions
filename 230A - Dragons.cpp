Output Status: 

By Rajakunalpandit, contest: Codeforces Round #142 (Div. 2), problem: (A) Dragons, Accepted


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
    
    ll s,n;
    cin>> s>> n;
    
    pair<int,int> x[10000];
    
    for(int i=0;i<n;i++){
        cin>> x[i].first >> x[i].second;
    }
    
    sort(x,x+n);
    
    for(int i=0;i<n;i++){
        if(s > x[i].first && x[i].first>=0){
            s += x[i].second;
            x[i].first = -1;
        }else{
            continue;
        }
    }
    
    bool flag = true;
    
    for(int i=0;i<n;i++){
        if(x[i].first >= 0){
            flag = false;
            break;
        }
    }
    
    if(flag){
        cout<< "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    
	return 0;
}

