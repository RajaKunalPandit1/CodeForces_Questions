Output Status:

By Rajakunalpandit, contest: Codeforces Round #405 (rated, Div. 2, based on VK Cup 2017 Round 1), problem: (A) Bear and Big Brother, Accepted

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
    
    ll a,b;
    cin >> a >> b;
    ll res = 0;
    
    do{
        res++;
        a *= 3;
        b *= 2;
    }while(a<=b);
    
    cout << res << endl;
    
	return 0;
}
