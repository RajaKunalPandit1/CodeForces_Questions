Output Status: 

By Rajakunalpandit, contest: Codeforces Round #629 (Div. 3), problem: (A) Divisibility Problem, Accepted


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
    
    ll t;
    cin>> t;
    
    while(t--){
        
        ll a,b,res =0;
        cin>> a >> b;
        
        if(a%b == 0){
            cout<< 0 << endl;
        }else{
            res = a%b;
            cout<< b-res << endl;
        }
        
    }
    
    
	return 0;
}
