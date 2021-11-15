Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #85 (Div. 2 Only), problem: (A) Petya and Strings, Accepted

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    string s1,s2;
    cin>>s1>>s2;
    
    for(int i=0;i<s1.size();i++){
        if(s1[i]<91){
           s1[i] += 32;
        }
        if(s2[i]<91){
            s2[i] += 32;
        }
    }
  
    if(s2>s1){
        cout<< -1 << endl;
    }else if(s1>s2){
        cout << 1 << endl;
    }else{
        cout<< 0 << endl;
    }

	return 0;
}
