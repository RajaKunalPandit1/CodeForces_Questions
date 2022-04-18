Output Status: 

By Rajakunalpandit, contest: Codeforces Round #465 (Div. 2), problem: (A) Fafa and his Company, Accepted

// #include <bits/stdc++.h>
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
    
    int i,n,cnt=1;
    cin>>n;
    for(i=2;i*i<n;i++)
    {
        if(n%i==0)
            cnt+=2;
    }
    if((double)sqrt(n)==(int)sqrt(n))
        cnt++;
    cout<<cnt<<endl;
    
	return 0;
}



    
