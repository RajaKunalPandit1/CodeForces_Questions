Output Status:

By Rajakunalpandit, contest: Codeforces Round #109 (Div. 2), problem: (A) I_love_\%username\%, Accepted


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
    
    ll n,res=0; 
    cin >> n;
    
    int arr[1000];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    ll curr_max = arr[0],curr_min = arr[0];
    
    for(int i=1;i<n;i++){
        if(curr_max < arr[i]){
            curr_max = arr[i];
            res++;
        }
        if(curr_min > arr[i]){
            curr_min = arr[i];
            res++;
        }
        
    }
    
    cout<< res << endl;
    
	return 0;
}
