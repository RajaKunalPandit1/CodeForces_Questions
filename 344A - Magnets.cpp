Output Status:

By Rajakunalpandit, contest: Codeforces Round #200 (Div. 2), problem: (A) Magnets, Accepted

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
    
    ll n,res=1;
    cin>> n;
    int arr[100000];
    
    for(int i=1;i<=n;i++){
        cin>> arr[i];
    }
    
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i+1]){
            res++;
            
        }
    }
    
    cout<< res << endl;
    
	return 0;
}
