Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #55 (Div. 2), problem: (A) Word, Accepted


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
    
    ll up=0,low=0;
    string str;
    cin>>str;
    
    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            up++;
        }else{
            low++;
        }
    }
    
    if(up>low){
        for(int i=0;i<str.length();i++){
            if(islower(str[i])){
                str[i] -= 32; 
            }else{
                continue;
            }
        }
    }else{
        for(int i=0;i<str.length();i++){
            if(isupper(str[i])){
                str[i] += 32; 
            }else{
                continue;
            }
        }
    }
    
    for(auto x:str){
        cout<< x;
    }
    
    
	return 0;
}


// Another Solution 


#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin>>s;
	int countup=0,countlow=0;
	for(int i=0;i<s.size();i++){
	    if(isupper(s[i])){
	        countup++;
	    }else{
	        countlow++;
	    }
	}
	if(countup>countlow){
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
	}else{
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
	return 0;
}
