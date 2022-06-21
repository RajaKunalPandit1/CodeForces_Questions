Output Stauts : 

By Rajakunalpandit, contest: Codeforces Round #784 (Div. 4), problem: (A) Division?, Accepted

// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <climits>
#include <cmath>
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
    
    int t;
  cin >> t;
  while (t--) {
    int r;
    cin >> r;
    if (r >= 1900) {
      cout << "Division 1" << "\n";
    } else if (r >= 1600 and r < 1900) {
      cout << "Division 2" << "\n";
    } else if (r >= 1400 and r < 1600) {
      cout << "Division 3" << "\n";
    } else {
      cout << "Division 4" << "\n";
    }
  }

    
	return 0;
}
