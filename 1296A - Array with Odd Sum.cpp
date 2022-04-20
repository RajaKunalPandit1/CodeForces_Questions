Output Status : 

By Rajakunalpandit, contest: Codeforces Round #617 (Div. 3), problem: (A) Array with Odd Sum, Accepted



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
        
        ll n;
        cin>>n;
       ll sum=0;
       ll odd=0;
       ll even=0;
       int arr[n];
       for(int j=0;j<n;j++){
           cin>>arr[j];
           if(arr[j]%2!=0 || arr[j]==1){
               odd++;
           }else{
               even++;
           }
           sum+=arr[j];
       }
       
       if(sum%2!=0 || sum==1){
           cout<<"YES"<<endl;
       }
       else{
           if(odd!=0 && even!=0){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
       }
    }

    
	return 0;
}



