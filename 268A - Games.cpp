Output Status: 

By Rajakunalpandit, contest: Codeforces Round #164 (Div. 2), problem: (A) Games, Accepted

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
    cin >> n;
    
    ll h[n],g[n],res =0;
    
    for(int i=0;i<n;i++){
        
        cin >> h[i] >> g[i];
        
        for(int j=0;j<i;j++){
            if(h[i] == g[j]){
                res++;
            }
            if(h[j] == g[i]){
                res++;
            }
        }
        
    }
    
    cout<< res << endl;
    
	return 0;
}
