Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #1, problem: (A) Theatre Square, Accepted


#include <iostream>
#include <string>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll n,m,a,res;
    cin>>n>>m>>a;
    
    if(n%a == 0){
        res = n/a;
    }else{
        res = n/a + 1;
    }
    
    if(m%a == 0){
        res*= m/a;
    }else{
        res *= m/a +1;
    }
    cout<< res << endl;

	return 0;
}
