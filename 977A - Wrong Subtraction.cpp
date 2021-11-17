Output Status:

By Rajakunalpandit, contest: Codeforces Round #479 (Div. 3), problem: (A) Wrong Subtraction, Accepted


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
    
    cin>>n >> k;
    
    while(k--){
        
        if(n%10>0){
            n--;
        }else{
            n = n/10;
        }
        
    }
    
    cout<< n << endl;
    
	return 0;
}
