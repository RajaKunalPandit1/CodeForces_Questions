Output Status:

By Rajakunalpandit, contest: Codeforces Round #274 (Div. 2), problem: (A) Expression, Accepted


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
    
    ll a, b, c;
    ll res = 0;
    
    cin>> a >> b >> c;
    
    
    
    res = max(res,(a+b)*c);
    res = max(res,(a*b)+c);
    res = max(res, a+b+c);
    res = max(res, a*b*c);
    res = max(res, a*b+c);
    res = max(res, (a*c)+b);
    res = max(res, (b*c)+a);
    res = max(res, (b+c)*a);
    
    
    cout<< res << endl;
    
	return 0;
}
