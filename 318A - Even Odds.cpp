Output Status:

By Rajakunalpandit, contest: Codeforces Round #188 (Div. 2), problem: (A) Even Odds, Accepted

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
    
    ll n,k;
    
    cin>> n >> k;
    
    if(k<=(n+1)/2){
        cout<< k*2-1 << endl;
    }else{
        cout<< (k-(n+1)/2)*2 << endl;
    }
    
    
	return 0;
}
