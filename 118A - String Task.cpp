Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #89 (Div. 2), problem: (A) String Task, Accepted

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;

    bool isVowel(char a){
        if(a == 'A' || a== 'a' || a == 'e' || a == 'E' || a == 'I' || a == 'i' || a == 'o' || a == 'O' || a == 'u' || a == 'U' || a == 'Y' || a == 'y'){
            return true;
        }
        return false;
    }

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    string s,res;
    cin>>s;
    
    
    for(int i=0;i<s.size();i++){
        if(isVowel(s[i])){
            continue;
        }else if(!isVowel(s[i])){
            res += ".";
            if(s[i]<91){
                s[i] += 32;
                res += s[i];
            }else{
                res += s[i];
            }
        }
    }
    
    for(auto x:res){
        cout<< x;
    }
    
	return 0;
}

