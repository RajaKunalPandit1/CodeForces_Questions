Output Status : 

By Rajakunalpandit, contest: Codeforces Round #277.5 (Div. 2), problem: (B) BerSU Ball, Accepted


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
    
    ll res = 0;
    ll n;
    cin>> n;
    ll arr[n];
    
    for(int k=0;k<n;k++){
        cin>> arr[k];
    }
    
    ll m;
    cin>> m;
    ll brr[m];
    
    for(int k=0;k<m;k++){
        cin>> brr[k];
    }
    
    // ll i=n-1,j=m-1;
    
    sort(arr,arr+n);
    sort(brr,brr+m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(arr[i]-brr[j]) < 2){
                res++;
                brr[j] = INT_MAX;
                break;
            }
        }
    }
    
    cout<< res << endl;
    
	return 0;
}
