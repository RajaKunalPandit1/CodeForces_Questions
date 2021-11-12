Output Status:

By Rajakunalpandit, contest: Codeforces Round #173 (Div. 2), problem: (A) Bit++, Accepted


#include <iostream>
#include <string>
#include <cmath>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll n,x=0;
    cin>>n;
    string s;
    
    while(n--){
    
    cin>>s;
    
        if(s[1] == '+'){
            ++x;
        }else{
            --x;
        }
    
    }
    cout<< x << endl;

	return 0;
}
