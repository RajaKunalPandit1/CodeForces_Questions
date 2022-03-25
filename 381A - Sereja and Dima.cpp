Output Status: 

By Rajakunalpandit, contest: Codeforces Round #223 (Div. 2), problem: (A) Sereja and Dima, Accepted


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
    
    ll n;
    cin>> n;
    
    ll arr[n];
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    ll sreja = 0,dima = 0; 
    
    ll i=0,j=n-1,k=0;
    
    
      while(i <= j){
          
        if(k%2 == 0){
            if(arr[i] > arr[j]){
                sreja += arr[i];
                i++;
                k++;
            }else{
                sreja += arr[j];
                j--;
                k++;
            }
        }else{
            if(arr[i] > arr[j]){
                dima += arr[i];
                i++;
                k++;
            }else{
                dima += arr[j];
                j--;
                k++;
            }
        }
          
      }  
    
    
    cout<< sreja <<  " " << dima << endl;
	return 0;
}



