Output Status:

By Rajakunalpandit, contest: Codeforces Round #238 (Div. 2), problem: (A) Gravity Flip, Accepted


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
    
    ll arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    sort(arr,arr+n);
    
    for(auto x: arr){
        cout<< x << " ";
    }
    
    cout<< endl;
    
	return 0;
}
