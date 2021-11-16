Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #63 (Div. 2), problem: (A) Young Physicist, Accepted


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
    
    ll n,x,y,z,xsum=0,ysum=0,zsum=0;
    cin>>n;
    
    while(n--){
        
        cin>>x>>y>>z;
        
        xsum += x;
        ysum += y;
        zsum += z;
        
    }
    
    if(xsum == 0 && ysum == 0 && zsum == 0){
        cout<< "YES" << endl;
    }else{
        cout<< "NO" << endl;
    }
    
    
	return 0;
}
