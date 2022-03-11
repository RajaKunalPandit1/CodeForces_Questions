Output Status: 

By Rajakunalpandit, contest: Codeforces Round #377 (Div. 2), problem: (A) Buy a Shovel, Accepted


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
    
    ll k,r,i=0;
    cin>> k >> r;
    
   bool flag = true;
   
   while(flag){
       i++;
       if((k*i)%10 == 0 || (k*i)%10 == r){
           cout<< i << endl;
           flag = false;
       }
   }
    
	return 0;
}

