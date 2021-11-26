Output Status:

By Rajakunalpandit, contest: Codeforces Beta Round #96 (Div. 2), problem: (A) HQ9+, Accepted


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
    cin>> str;
    
    bool flag = false;
    
    for(int i=0;i<str.length();i++){
        if(str[i]>=33 && str[i]<=126){
            if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
                flag = true;
                break;
            }
        }
    }
    
    if(flag){
        cout<< "YES" << endl;
    }else{
        cout<< "NO" << endl;
    }
    
    
	return 0;
}
