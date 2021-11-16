Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #77 (Div. 2 Only), problem: (A) Football, Accepted


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
    
    string str;
    cin>>str;
    
    ll cnt=1,res=0;
    
    
    for(int i=1;i<str.length();i++){
        if(str[i] == str[i-1]){
            cnt++;
            res = max(res,cnt);
        }else{
            cnt = 1;
            continue;
        }
    }
    
    if(res>=7){
        cout << "YES" << endl;
    }else{
        cout<< "NO" << endl;
    }
    
	return 0;
}
