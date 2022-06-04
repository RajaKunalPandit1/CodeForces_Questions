Output Status: 

By Rajakunalpandit, contest: Codeforces Round #719 (Div. 3), problem: (A) Do Not Be Distracted!, Accepted


// #include <bits/stdc++.h>
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
    cin>> t;
    
    while(t--){
        
        // ll n;
        // cin>> n;
        
        // string str;
        // cin>> str;
        
        // ll arr[256] = {0};
        bool flag= true;
        
        // str[arr[0]] = 1;
        
        // for(int i=1;i<n;i++){
        //     // if(arr[str[i]] != -1){
        //     //     while(str[i] != str[i+1]){
        //     //         i++;
        //     //         continue;
        //     //     }
        //     //     arr[str[i]] = -1;
        //     // }else{
        //     //     flag == false;
        //     //     break;
        //     // }
            
        //     if(str[i] == str[i-1]){
        //         continue;
        //     }else{
        //         if(arr[str[i]]> 0){
        //             flag = false;
        //             break;
        //         }else{
        //             arr[str[i]] = 1;
        //         }
        //     }
        // }
        
        
        // if(flag){
        //     cout<< "NO" << endl;
        // }else{
        //     cout<< "YES" << endl;
        // }
        
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a(26,0);
    a[s[0]-'A']=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) continue;
        else{
            if(a[s[i]-'A']>0){
                flag = false;
                break;
            }
            a[s[i]-'A']=1;
        } 
    }
        if(flag){
            cout<< "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }
        
    }

    
	return 0;
}



