Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #65 (Div. 2), problem: (A) Way Too Long Words, Accepted


#include <iostream>
#include <string>
#define ll long long int
#define endl "\n"
using namespace std;
 
int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll t;
    cin>>t;
    
    while(t--){
        string word;
        cin>> word;
        
        ll n = word.size();
        
        if(n>10){
            ll mid = n-2;
            cout<< word[0]<<mid<<word[n-1] << endl;
        }else{
            cout<< word << endl;
        }
    }
 
	return 0;
}
