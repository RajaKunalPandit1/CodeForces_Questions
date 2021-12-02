Output Status:

By Rajakunalpandit, contest: Codeforces Round #141 (Div. 2), problem: (A) Is your horseshoe on the other hoof?, Accepted


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
    
    ll n = 4;
    ll res = 0;
    
    ll arr[4];
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    sort(arr,arr+n);
    
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            res++;
        }
    }
    
    cout<< res << endl;
    
	return 0;
}
