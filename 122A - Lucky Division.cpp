Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #91 (Div. 2 Only), problem: (A) Lucky Division, Accepted

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
    
    bool flag = false;
    
    int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};
    
    for(int i=0;i<12;i++){
        if(n%arr[i] == 0){
            flag = true;
        }
    }
    
    if(flag){
        cout<< "YES" << endl;
    }else{
        cout<< "NO" << endl;
    }
    
	return 0;
}
