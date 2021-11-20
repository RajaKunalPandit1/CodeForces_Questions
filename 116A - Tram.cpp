Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #87 (Div. 2 Only), problem: (A) Tram, Accepted


#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
#include <vector>
#include <unordered_set>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;


int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll n,j=0,res=0;
    cin>>n;
    
    ll a[1000],b[1000];
    
    for(int i=1;i<=n;i++){
        cin>> a[i] >> b[i];
    }
    
    for(int i=1;i<=n;i++){
        j -= a[i];
        j += b[i];
        
        res = max(res,j);
    }
    
    cout<< res << endl;    
    
	return 0;
}
