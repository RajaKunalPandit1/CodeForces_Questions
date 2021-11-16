Output Status:

By Rajakunalpandit, contest: Codeforces Round #146 (Div. 2), problem: (A) Boy or Girl, Accepted


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
    
    unordered_set<char> s; 
    
    for(int i=0;i<str.size();i++){
        s.insert(str[i]);
    }
    
    if(s.size()%2 == 0){
        cout<< "CHAT WITH HER!" << endl;
    }else{
        cout<< "IGNORE HIM!" << endl;
    }
    
	return 0;
}
