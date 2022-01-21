Output Status: 

By Rajakunalpandit, contest: Codeforces Round #130 (Div. 2), problem: (A) Dubstep, Accepted


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
    cin >> str;
    
    string res = "";
 
    ll i;
    for(i=0;i<str.size();){
         
         if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
             if(i!=0 && res != ""){
                 res += " ";
             }
             i = i+3;
             continue;
         }else{
             res += str[i];
             i++;
         }
            
    }
    
        
    for(auto x: res){
        cout<< x;
    }
   
	return 0;
}


// Another Solution


#include <iostream>
using namespace std;

int main() {
	string s;
	int flag=1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!flag){
	            cout<<" ";
	        }
	        continue;
	    }else {
	        flag=0;
	        cout<<s[i];
	    }
	}
	return 0;
}
