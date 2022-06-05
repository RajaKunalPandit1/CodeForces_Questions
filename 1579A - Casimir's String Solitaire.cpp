Output Status: 

By Rajakunalpandit, contest: Codeforces Round #744 (Div. 3), problem: (A) Casimir's String Solitaire, Accepted


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
        
        string str;
        cin>> str;
        
        ll a=0,b=0,c=0;
        ll n = str.length();
        
        for(int i=0;i<n;i++){
            
            if(str[i] == 'A'){
                a++;
            }else if(str[i] == 'B'){
                b++;
            }else{
                c++;
            }
        }
        
        if((b==a && c == 0) || (b==c && a==0) || (a+c == b)){
            cout<< "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }
        
    }

    
	return 0;
}



