Output Status: 

By Rajakunalpandit, contest: Codeforces Round #404 (Div. 2), problem: (A) Anton and Polyhedrons, Accepted

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
    
    
    ll n;
    cin >> n;
    
    string str[n];
    
    ll res = 0;
    
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    
    for(int i=0;i<n;i++){
        if(str[i] == "Tetrahedron"){
            res+= 4;
        }else if(str[i] == "Cube"){
            res += 6;
        }else if(str[i] == "Octahedron"){
            res += 8;
        }else if(str[i] == "Dodecahedron"){
            res += 12;
        }else if(str[i] == "Icosahedron"){
            res += 20;
        }
    }
    
    cout<< res << endl;
    
	return 0;
}
