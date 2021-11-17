Output Status:

By Rajakunalpandit, contest: Codeforces Round #340 (Div. 2), problem: (A) Elephant, Accepted


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
    
    ll x,step = 0;
    cin >> x;
    
    while(x>0){
        if(x>=5){
        step++;
        x-= 5;
    }else if(x>=4){
        step++;
        x-=4;
    }else if(x>=3){
        step++;
        x-=3;
    }else if(x>=2){
        step++;
        x-=2;
    }else if(x>=1){
        step++;
        x-=1;
    }
}
    
cout<< step << endl;    
    
	return 0;
}


// Another Solution 


#include <iostream>
using namespace std;
int a, pas;
int main() {
    cin >> a;
    pas = a / 5;
    if (a % 5 > 0) {
        pas++;
    }
    cout << pas;
}
