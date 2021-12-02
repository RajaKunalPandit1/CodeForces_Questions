Output Status: 

By Rajakunalpandit, contest: Codeforces Round #321 (Div. 2), problem: (A) Kefa and First Steps, Accepted


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
    
    ll arr[100000];
    ll n;
    cin>> n;
    
    for(int i=1;i<=n;i++){
        cin>> arr[i];
    }
    
    ll res =1,cnt=1;
    
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i+1]){
            cnt++;
            res = max(res,cnt);
        }else{
            cnt = 1;
        }
    }
    
    cout<< res << endl;
    
	return 0;
}
