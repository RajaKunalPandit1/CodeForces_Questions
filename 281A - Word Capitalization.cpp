Output Status:

By Rajakunalpandit, contest: Codeforces Round #172 (Div. 2), problem: (A) Word Capitalization, Accepted

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    string s,res;
    cin>>s;
    
    if(s[0]>91){
        s[0] -= 32;
        res+= s[0];
    }else{
        res+= s[0];
    }
    
    for(int i=1;i<s.size();i++){
        res+= s[i];
    }
    
    for(auto x: res){
        cout<< x;
    }
    
	return 0;
}

