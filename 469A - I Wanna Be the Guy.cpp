Output Status: 

By Rajakunalpandit, contest: Codeforces Round #268 (Div. 2), problem: (A) I Wanna Be the Guy, Accepted


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
    
    ll arr[250];
    
    ll cnt = 1;
    
    ll p;
    cin>> p;
    
    for(int i=0;i<p;i++){
        cin>> arr[i];
    }
    ll r;
    cin>> r;
    
    for(int i=0;i<r;i++){
        cin >> arr[p+i];
    }
    
    sort(arr,arr+p+r);
    
    for(int i=1;i<p+r;i++){
        if(arr[i]!= arr[i-1]){
            cnt++;
        }
    }
    
    if(p == 0 && r == 0){
        cout<< "Oh, my keyboard!" << endl;
        
    }else if(cnt == n){
        cout<< "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
    
	return 0;
}
