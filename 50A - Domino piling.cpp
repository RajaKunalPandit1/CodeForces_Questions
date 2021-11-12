Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #47, problem: (A) Domino piling, Accepted

#include <iostream>
#include <string>
#include <cmath>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll m,n;
    cin>>m>>n;
    
    ll prod = m*n;
    
    ll res = ceil(prod/2);
    
    cout<< res << endl;

	return 0;
}
