Output Status: 

By Rajakunalpandit, contest: VK Cup 2012 Qualification Round 1, problem: (B) Taxi, Accepted


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
    
    sort(arr,arr+n);
    
    ll res = 0,i=0,j=n-1;
    
    while(i<j){
        
        if(arr[i]+arr[j] <= 4){
            arr[j] += arr[i];
            i++;
        }else{
            j--;
            res++;
        }
    }
    
    cout<< res + 1 << endl;
    
	return 0;
}
