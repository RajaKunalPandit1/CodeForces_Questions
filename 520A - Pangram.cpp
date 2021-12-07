Output Status: 


By Rajakunalpandit, contest: Codeforces Round #295 (Div. 2), problem: (A) Pangram, Accepted

#include <iostream>
#include <string>
#include <array>
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
    
    string str;
    cin >> str;
    
    bool arr[26] = {false};
    bool flag = true;

    for(int i=0;i<n;i++){
        int temp;
        if(str[i]>='a' && str[i]<='z'){
            temp = str[i]-'a';
        }else if(str[i]>='A' && str[i]<='Z'){
            temp = str[i]-'A';
        }
        
        arr[temp] = true;
    }
    
    for(int i=0;i<26;i++){
        if(arr[i] == false){
            flag = false;
            break;
        }
    }
    
    if(flag == true){
        cout<< "YES" << endl;
    }else{
        cout<< "NO" << endl;
    }
    
    
	return 0;
}
