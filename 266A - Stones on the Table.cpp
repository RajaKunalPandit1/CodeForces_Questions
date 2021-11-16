Output Status:

By Rajakunalpandit, contest: Codeforces Round #163 (Div. 2), problem: (A) Stones on the Table, Accepted

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
    
    ll n,g=0,r=0,b=0;
    string str;
    cin>>n;
    cin>>str;
    
    for(int i=1;i<n;i++){
        if(str[i] == str[i-1]){
            if(str[i] == 'R'){
                r++;
            }else if(str[i] == 'G'){
                g++;
            }else if(str[i] == 'B'){
                b++;
            }
        }
    }
    
    cout<< r+g+b << endl;
    
	return 0;
}
