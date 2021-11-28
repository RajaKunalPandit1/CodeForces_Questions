Output Status:

By Rajakunalpandit, contest: Codeforces Round #277 (Div. 2), problem: (A) Calculating Function, Accepted


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
    
   ll n,res=0;
   cin>>n;
   
   if(n%2 == 0){
       cout<< n/2 << endl;
   }else{
       cout<< ((n+1)/2) * (-1) << endl;
   }
    
	return 0;
}
