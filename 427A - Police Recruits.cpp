Output Status: 

By Rajakunalpandit, contest: Codeforces Round #244 (Div. 2), problem: (A) Police Recruits, Accepted


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
    
    ll n;
    cin>> n;
    
    int arr[n+1];
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    ll res = 0,cnt = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i] >0){
            cnt+= arr[i];
        }else if((arr[i] < 0 && cnt>0)){
            cnt--;
        }else if(arr[i] < 0){
            res++;
        }
    }
    
    cout<< res << endl;
    
	return 0;
}




