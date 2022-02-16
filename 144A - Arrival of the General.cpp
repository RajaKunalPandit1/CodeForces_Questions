Output Status: 

By Rajakunalpandit, contest: Codeforces Round #103 (Div. 2), problem: (A) Arrival of the General, Accepted

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
    cin>>n;
    
    ll arr[n];
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    ll max_ele= 0, min_ele = 1000;
    ll max_idx = 0, min_idx = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max_ele){
            max_ele = arr[i];
            max_idx = i;
        }
        if(arr[i]<= min_ele){
            min_ele = arr[i];
            min_idx = i;
        }
    }
    
    if(max_idx>min_idx){
        cout<< (max_idx-1)+(n-min_idx)-1 << endl;
    }else{
        cout<< (max_idx-1)+(n-min_idx) << endl;
    }
    
	return 0;
}
