Output Status:

By Rajakunalpandit, contest: Codeforces Round #126 (Div. 2), problem: (B) Drinks, Accepted


#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <iomanip>
#include <unordered_set>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;


int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll n;
    ll arr[100];
    cin >> n;
    
    double res =0.0,sum= 0.0;
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
        sum+= arr[i];
    }
    
    res = sum/n;
    
    cout<< setprecision(12) << res << endl;
    
	return 0;

}

