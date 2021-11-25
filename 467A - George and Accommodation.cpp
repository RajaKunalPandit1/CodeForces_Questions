Output Status:

By Rajakunalpandit, contest: Codeforces Round #267 (Div. 2), problem: (A) George and Accommodation, Accepted

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
    
    ll n;
    cin>>n;
    ll p[n],q[n];
    ll res = 0;
    
    for(int i=0;i<n;i++){
        cin>>p[i] >> q[i];
    }
    
    for(int i=0;i<n;i++){
        if(q[i]-p[i] >=2){
            res++;
        }
    }
    cout<< res << endl;
    
	return 0;
}
