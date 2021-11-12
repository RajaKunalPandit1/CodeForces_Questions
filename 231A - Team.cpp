Output Status:

By Rajakunalpandit, contest: Codeforces Round #143 (Div. 2), problem: (A) Team, Accepted


#include <iostream>
#include <string>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll n,res=0,a,b,c;
    cin>>n;
    
    while(n--){
        cin>>a>>b>>c;
        
        if(a+b+c >=2){
            res++;
        }
    }
    
   cout<< res << endl;

	return 0;
}
