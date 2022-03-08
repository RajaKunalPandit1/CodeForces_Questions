Output Status: 

By Rajakunalpandit, contest: Codeforces Round #290 (Div. 2), problem: (A) Fox And Snake, Accepted


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
    
   ll n,m;
   
   cin >> n >> m;
   
   ll oddness = 0;
   
   for(int i=0;i<n;i++){
       
       if(i%2 == 0){
           for(int j=0;j<m;j++){
               cout << "#";
           }
           cout<< endl;
       }else{
           if(oddness%2 == 0){
               for(int j=0;j<m;j++){
                   if(j!=m-1){
                       cout << ".";
                   }else{
                       cout<< "#";
                   }
               }
               oddness++;
               cout<< endl;
           }else{
               cout<< "#";
               for(int j=1;j<m;j++){
                   cout<< ".";
               }
               oddness++;
               cout<< endl;
           }
       }
   }
    
	return 0;
}

