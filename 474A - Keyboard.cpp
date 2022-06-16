Output Status : 

By Rajakunalpandit, contest: Codeforces Round #271 (Div. 2), problem: (A) Keyboard, Accepted

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
    
    char ch;
    string str;
    
    cin>> ch;
    cin >> str;
    
    char arr[30] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    
    string res = "";
    
    for(int i=0;i<str.length();i++){
        for(int j=0;j<30;j++){
            if(arr[j] == str[i]){
                if(ch == 'R' || ch == 'r'){
                    res += arr[j-1];
                }else{
                    res += arr[j+1];
                }
            }
        }
    }
    
    cout<< res << endl;
    
    
	return 0;
}



