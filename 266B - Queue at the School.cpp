Output Status:

By Rajakunalpandit, contest: Codeforces Round #163 (Div. 2), problem: (B) Queue at the School, Accepted



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
    
    ll n,t;
    cin>>n >> t;
    
    string str;
    cin >> str;    

    while(t--){
        for(int i=1;i<str.length();i++){
            if(str[i] == 'G' && str[i-1] == 'B'){
                str[i] = 'B';
                str[i-1] = 'G';
                i++;
            }
        }
    }
    
    cout<< str << endl;
    
	return 0;
}
