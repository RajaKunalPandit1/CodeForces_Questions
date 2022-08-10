Output Status : 

By Rajakunalpandit, contest: Codeforces Round #806 (Div. 4), problem: (B) ICPC Balloons, Accepted


#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <climits>
#include <cmath>
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
    
    ll t;
    cin >> t;
    
    while(t--){
        
        ll n;
        string s;
        cin >> n;
        cin >> s;
        
       vector<int>freq(26,0);
       ll ans=0;
       
       for(int i=0;i<s.size();i++){
           if(freq[s[i]-'A']==0)
                ans+=2;
           else
                ans++;
           freq[s[i]-'A']=1;
       }
       
       cout<< ans << endl;
       
    }
	return 0;
}





