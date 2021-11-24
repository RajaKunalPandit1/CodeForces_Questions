Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #40 (Div. 2), problem: (A) Translation, Accepted

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
    
    string str,t;
    
    cin>> str;
    cin>> t;
    ll j,k;
    ll n = str.length();
    ll m = t.length();
    bool flag = true;
    
    if(m!=n){
        cout<< "NO" << endl;
    }else{
        for(int i=0;i<n;i++){
           j=i;
           k=n-i-1;
           
           if(str[j]!= t[k]){
               cout<< "NO" << endl;
               flag = false;
                break;
           }
        }
    }
    
    if(k==0 && flag){
        cout << "YES" << endl;
    }
    
	return 0;
}




