Output Status : 

By Rajakunalpandit, contest: Codeforces Round #295 (Div. 2), problem: (B) Two Buttons, Accepted


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
    
    ll a,b;
    cin>> a >> b;
    
    ll res = 0;
    
   while(a<b){
       
       if(b%2 == 0){
           
           b = b/2;
           res++;
           
       }else{
           b++;
           res++;
       }
       
   }
   
   cout<< res + (a-b) << endl;
    
	return 0;
}



