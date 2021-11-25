Output Status:

By Rajakunalpandit, contest: Codeforces Round #111 (Div. 2), problem: (A) Twins, Accepted

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
    
    
    ll n,t_sum=0;
    cin>> n;
    ll arr[n];
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
        t_sum += arr[i];
    }
    t_sum= t_sum/2;
    ll res =0,cnt =0;
    
    sort(arr,arr+n);
    
    for(int i=n-1;i>=0;i--){
        res+=arr[i];
        cnt++;
        if(t_sum<res){
            break;
        }
    }
    
    cout<< cnt << endl;

	return 0;
}
