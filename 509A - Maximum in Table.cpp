Output Status :

By Rajakunalpandit, contest: Codeforces Round #289 (Div. 2, ACM ICPC Rules), problem: (A) Maximum in Table, Accepted

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
    
    ll n;
    cin>> n;
    
    ll arr[10][10];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == 0){
                arr[i][j] = 1;
            }else if(j == 0){
                arr[i][j]  = 1;
            }else{
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
    }
    
    cout<< arr[n-1][n-1];

    
	return 0;
}
