Output Status: 

By Rajakunalpandit, contest: Codeforces Beta Round #25 (Div. 2 Only), problem: (A) IQ test, Accepted


#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
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
    
    ll arr[100];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    ll odd =0 ,eve =0, res1,res2;
    
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            eve++;
            res1 = i+1;
        }else{
            odd++;
            res2 = i+1;
        }
    }
    
    if(eve > odd){
        cout<< res2 << endl;
    }else{
        cout<< res1 << endl;
    }

	return 0;
}
