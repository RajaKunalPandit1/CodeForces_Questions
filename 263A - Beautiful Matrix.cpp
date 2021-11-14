Output Status:

By Rajakunalpandit, contest: Codeforces Round #161 (Div. 2), problem: (A) Beautiful Matrix, Accepted


#include <iostream>
#include <string>
#include <cmath>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll x;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>x;
            if(x == 1){
                cout<< abs(i-3) + abs(j-3) << endl;
            }
        }
    }
    

	return 0;
}
