/******************************************************************************************************
 
                  Day 16: Exceptions - String to Integer | HackerRank #30daysOfCode
                      
******************************************************************************************************/





#include<bits/stdc++.h>
using namespace std;


int main(){


    try {
        string str;
        cin >> str;

        int num = stoi(str);
        cout << num;
    }
    catch (...) {
        cout << "Bad String";
    }
    
  
    return 0;
}
