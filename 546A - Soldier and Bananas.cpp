Output Status:

By Rajakunalpandit, contest: Codeforces Round #304 (Div. 2), problem: (A) Soldier and Bananas, Accepted


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
    
    ll k,n,w;
    cin>> k >> n >> w;
    
    ll sum = 0, res=0;
    
    for(int i= 1;i<=w;i++){
        sum += (k*i);
    }
    
    res = sum - n;
    
    if(res<0){
        cout<< 0 << endl;
    }else{
    cout<< res << endl;
    }

	return 0;
}
