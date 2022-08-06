Output Status : 

By Rajakunalpandit, contest: Codeforces Round #725 (Div. 3), problem: (B) Friends and Candies, Accepted

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <climits>
#include <cmath>
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
    
    ll t;
    cin >> t;
    
    while(t--){
        
        ll n;
        cin>> n;
        
        ll arr[n],sum=0;
        for(int i=0;i<n;i++){
            cin>> arr[i];
            sum += arr[i];
        }
        
        if(sum % n == 0){
            
            double avg = (double)sum/(double)n;
            int k = 0;
            
            for(int i=0;i<n;i++){
                if(arr[i] > avg){
                    k++;
                }
            }
            cout << k << endl;
        }else{
            cout<< -1 << endl;
        }
    }

	return 0;
}
