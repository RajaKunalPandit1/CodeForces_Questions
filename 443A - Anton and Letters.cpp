Output Status: 

By Rajakunalpandit, contest: Codeforces Round #253 (Div. 2), problem: (A) Anton and Letters, Accepted


#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <unordered_set>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;


int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    string str;
    
    getline(cin,str);
    
    ll n = str.length();
    
    unordered_set<char> s;
    
    for(int i=0;i<n;i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            s.insert(str[i]);
        }
    }
    
    ll res = s.size();
    
    cout<< res << endl;
    
    
    
	return 0;
}
