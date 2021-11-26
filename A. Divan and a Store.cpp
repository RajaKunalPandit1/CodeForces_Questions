Output Status:

By Rajakunalpandit, contest: Codeforces Round #757 (Div. 2), problem: (A) Divan and a Store, Pretests passed


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
    
    ll t,n,l,r,k;
    cin>>t;
    
    while(t--){
        ll arr[100];
        ll res = 0,sum=0;
        
        cin>> n>> l>> r>> k;
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        // sort(arr,arr+n,greater<int>());
        sort(arr,arr+n);
        
        for(int i=0;i<n;i++){
            if(arr[i]>=l && arr[i]<=r){
                sum+= arr[i];
                if(sum<=k){
                    res++;
                }
            }
            // if(sum>=k){
            //     break;
            // }
        }
        cout<< res << endl;
        
    }
    
	return 0;
}
