Output Status:

By Rajakunalpandit, contest: Technocup 2019 - Elimination Round 1, problem: (A) In Search of an Easy Problem, Accepted


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
    cin>> n;
    ll arr[100];
    bool flag = false;
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            flag = true;
            break;
        }
    }
    
    if(flag == false){
        cout<< "EASY" << endl;
    }else{
        cout<< "HARD" << endl;
    }
    
	return 0;
}
