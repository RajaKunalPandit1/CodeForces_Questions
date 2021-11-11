Ouput Status:

By Rajakunalpandit, contest: Codeforces Beta Round #4 (Div. 2 Only), problem: (A) Watermelon, Accepted



#include <iostream>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    int w;
    cin>>w;
    
    if(w%2 == 0 && w>2){
        cout<< "YES" << endl;
    }else{
        cout<< "NO" << endl;
    }
	
	return 0;
}
