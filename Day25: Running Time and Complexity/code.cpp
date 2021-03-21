/*************************************************************************************************************

                   Day 25: Running Time and complexity | HackerRank #30daysOfCode
                   
*************************************************************************************************************/




#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    
     int t; cin >> t;
     while(t--){
         ll n;
         cin >> n;
         
         int c = 0;
         
         if(n <= 1){
             cout << "Not prime" << endl;
         }
         else if(n == 2){
             cout << "Prime" << endl;
         }
         else if(n % 2 == 0){
             cout << "Not prime" << endl;
         }
         
         else{
             for(ll i = 3; i <= sqrt(n); i += 2){
                 if(n % i == 0){
                     c = 1;
                 }
             }
             
             if(c == 1){
                 cout << "Not prime" << endl;
             }
             else{
                 cout << "Prime" << endl;
             }
         }
     }
    return 0;
}
