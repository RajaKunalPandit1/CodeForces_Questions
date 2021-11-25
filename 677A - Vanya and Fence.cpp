Output Status:

By Rajakunalpandit, contest: Codeforces Round #355 (Div. 2), problem: (A) Vanya and Fence, Accepted


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
    
    
    ll n,h;
    cin >> n>> h;
    
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    ll res = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>h){
            res+=2;
        }else{
            res++;
        }
    }
    
    cout<< res << endl;
    
	return 0;
}
