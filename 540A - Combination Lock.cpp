Output Status : 

By Rajakunalpandit, contest: Codeforces Round #301 (Div. 2), problem: (A) Combination Lock, Accepted


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
    
   long int i,j,x,m,n,y,a,b,ans;
    char s[10000],st[10000];
    while(cin>>n)
    {
        cin>>s>>st;
        ans=0;
        for(i=0; i<strlen(s); i++)
        {
            a=s[i]-'0';b=st[i]-'0';
            m=abs(a-b);
            if(m>5)
            {
                x=max(a,b);
                y=min(a,b);
                ans+=9-x+y+1;
            }
            else
                ans+=m;
        }
        cout<<ans<<endl;
	  return 0;
  }
}
