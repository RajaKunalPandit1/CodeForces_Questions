Output Status: 

By Rajakunalpandit, contest: Codeforces Round #492 (Div. 2) [Thanks, uDebug!], problem: (A) Hit the Lottery, Accepted

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
    
    ll n;
    cin >> n;
    
    ll res = 0;
    
    while(n!=0){
        if(n>=100){
            res ++ ;
            n  -= 100;
        }else if(n>=20){
            res++;
            n -= 20;
        }else if(n>=10){
            res++;
            n -= 10;
        }else if(n>=5){
            res++;
            n -= 5;
        }else if(n>=1){
            res++;
            n -= 1;
        }
    }
    
    cout<< res << endl;
    
	return 0;
}

// Another Solution 


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    int a[]={100,20,10,5,1};
    cin>>n;
    for(int i=0; i<5; i++)
    {
        ans+=n/a[i];
        n=n%a[i];
    }
    cout<<ans<<endl;
    return 0;
}
