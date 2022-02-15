Output Status: 

By Rajakunalpandit, contest: Codeforces Round #196 (Div. 2), problem: (A) Puzzles, Accepted


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
    
    ll n,m;
    
    cin >> n >> m;
    
    ll arr[m];
    
    for(int i=0;i<m;i++){
        cin>> arr[i];
    }
    
    sort(arr,arr+m);
    
    int leastValue = arr[n-1]-arr[0];
    
    for(int i=1;i<=m-n;++i){
        if((arr[n+i-1]-arr[i]) < leastValue){
            leastValue = arr[n+i-1] - arr[i];
        }
    }
    
    cout<< leastValue << endl;
    
    
	return 0;
}
