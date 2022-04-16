Output Status:

By Rajakunalpandit, contest: Codeforces Round #653 (Div. 3), problem: (C) Move Brackets, Accepted

// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
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
        
          ll n,i,x,yes=0,ans=0;
        string a;
        cin>>n;
        cin>>a;
        for(i=0;i<n;i++)
        {
            if(a[i]==')')
            {
                if(yes>=1) 
                {
                    yes--;
                }
                else
                {
                    ans++;
                }
            }
            else
            {
                yes++;
            }
        }
        cout<<ans<<endl;
    }
    
	return 0;
}
