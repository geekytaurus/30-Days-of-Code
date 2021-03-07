/*******************************************************************************************************************

                         Day 8: Dictionaries and Maps | HackerRank #30daysOfCode
                                       
                                         
********************************************************************************************************************/


#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    map<string, int> nameNum;
    map<string, int>::iterator it;
    int j;
    string s, s1;
    
   //-----------------insertig n numbers of key and value pair in the map------------------------
    for(int i = 1; i <= n; i++){
        cin >> s >> j;
        nameNum.insert(pair<string, int>(s, j));
    }
    
  
  //----------taking unknown number of quaries and then find in the map--------------------------
    while(cin >> s1){
        if(nameNum.find(s1) == nameNum.end()){
            cout << "Not found" << endl;
        }
        else{
            it = nameNum.find(s1);
            cout << it->first << "=" << it->second << endl;
        }
    }
    return 0;
}

                                      
