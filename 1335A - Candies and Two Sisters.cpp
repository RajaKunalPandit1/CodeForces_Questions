Output Status: 

By Rajakunalpandit, contest: Codeforces Round #634 (Div. 3), problem: (A) Candies and Two Sisters, Accepted


#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <unordered_set>
#include <cctype>
#include <cmath>
#define ll long long int
#define endl "\n"
using namespace std;


int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll t;
    cin >> t;
    
    while(t--){
        ll n;
        cin >> n;
        
        if(n>2){
            if(n&1){
                cout<< (n>>1) << endl;
            }else{
                cout<<((n>>1)-1) <<endl;
            }
        }else{
            cout << 0 << endl;
        }
        
    }
    
    
	return 0;
}
