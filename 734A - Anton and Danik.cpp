Output Status:

By Rajakunalpandit, contest: Codeforces Round #379 (Div. 2), problem: (A) Anton and Danik, Accepted



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
    cin>> n;
    
    string s;
    cin>> s;
    ll a=0,d=0;
    
    for(int i=0;i<s.length();i++){
        
        if(s[i] == 'A'){
            a++;
        }else{
            d++;
        }
    }
    
    
    if(a>d){
        cout<< "Anton" << endl;
    }else if(d>a){
        cout << "Danik" << endl;
    }else{
        cout<< "Friendship" << endl;
    }
    
	return 0;
}

