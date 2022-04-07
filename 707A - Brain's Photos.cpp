Output Status:

By Rajakunalpandit, contest: Codeforces Round #368 (Div. 2), problem: (A) Brain's Photos, Accepted

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
    
    ll n,m;
    
    cin>> n >> m;
    
    char arr[n][m];
    bool flag = true;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y'){
                flag = false;
                break;
            }
        }
    }
    
    if(flag){
        cout<< "#Black&White" << endl;
    }else{
        cout<< "#Color" << endl;
    }

    
	return 0;
}



