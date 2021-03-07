/******************************************************************************************************************

                          Day 6: Let's Review | HackerRank #30daysOfCode
                            
                                       
*******************************************************************************************************************/


#include <bits/stdc++.h>
#define endl "\n"
using namespace std;


int main() {
    
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string s;
        cin >> s;
        
        for(int i = 0; i < s.length(); i += 2){
            cout << s[i];
        }
        cout << " ";
        for(int i = 1; i < s.length(); i += 2){
            cout << s[i];
        }
        
        cout << endl;
    }
    
    return 0;
}
