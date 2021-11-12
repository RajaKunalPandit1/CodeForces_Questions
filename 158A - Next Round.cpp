Output Status:

By Rajakunalpandit, contest: VK Cup 2012 Qualification Round 1, problem: (A) Next Round, Accepted



#include <iostream>
#include <string>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    int  n,k,arr[100],res=0;
    cin>>n;
    cin>>k;
    
    for(int i=1;i<=n;i++){
        cin>> arr[i];
    }
    
    for(int j=1;j<=n;j++){
        if(arr[j]>=arr[k] && arr[j]>0){
            res++;
        }
    }
    
    cout<< res << endl;

	return 0;
}
