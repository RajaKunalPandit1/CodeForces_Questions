Output Status:

By Rajakunalpandit, contest: Codeforces Round #166 (Div. 2), problem: (A) Beautiful Year, Accepted


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
    
    ll y;
    cin>>y;
    
    while(true){
        
        y++;
        
        ll a = y/1000;
        ll b = y/100%10;
        ll c = y/10%10;
        ll d = y%10;
        
        
        if(a!=b && a!=c && a!=d && b!=a && b!=c && b!=d && c!=d){
            break;
        }
    }
    cout<< y << endl;
    
	return 0;
}
