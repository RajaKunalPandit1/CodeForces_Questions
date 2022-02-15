Output Status: 

By Rajakunalpandit, contest: Codeforces Round #101 (Div. 2), problem: (A) Amusing Joke, Accepted


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
    
    string guest,host;
    
    cin>> guest >> host;
    
    string pile;
    cin>> pile;
    
    map <char, int> mp1;
    map <char, int> mp2;
    
    string str = guest;
    str += host;
    
    bool flag1 = true;
    bool flag2 = true;
    

    for(int i=0;i<str.length();i++){
        mp1[str[i]]++;
    }
    

    for(int i=0;i<pile.length();i++){
        mp2[pile[i]]++;
        mp1[pile[i]]--;
    }
    
    for(int i=0;i<str.length();i++){
        mp2[pile[i]]--;
    }
    
   for(auto x: mp1){
       if(x.second >=1){
           flag1 = false;
           break;
       }
   }
   
   for(auto x: mp2){
       if(x.second >=1){
           flag2 = false;
           break;
       }
   }
    
    if(flag1 && flag2){
        cout << "YES" << endl;
    }else{
        cout<< "NO" << endl;
    }
    
	return 0;
}

// Another Solution


#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string a, b, c, s;
    cin >> a >> b >> c;

    s = a + b;

    sort(s.begin(), s.end());
    sort(c.begin(), c.end());

    if(s == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
