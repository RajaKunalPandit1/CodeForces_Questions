Output Status:

By Rajakunalpandit, contest: Codeforces Round #197 (Div. 2), problem: (A) Helpful Maths, Accepted

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
    
    vector<char> v;
    
    for(int i=0;i<s.size();i++){
        if(s[i] != '+'){
            v.push_back(s[i]);
        }
    }
    
    sort(v.begin(),v.end());
    int n = v.size();
    int j=0;
    
    for(int i=0;i<s.size();i++){
        if(s[i] == '+'){
            res+= "+";
        }else{
            res += v[j];
            j++;
        }
    }
    
    for(auto x:res){
        cout<< x;
    }
    
	return 0;
}
