/***************************************************************************************************************

                             Day 10: Binary Numbers | HackerRank #30daysOfCode
                                     
                                       Author : MAMATA SHEE
                                          ( @mpscoder )

****************************************************************************************************************/


#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    int count = 0;
    int mx = INT_MIN;
    
    while(n > 0){
        if(n % 2 == 1){
            count++;
            
            mx = max(mx, count);
        }
        else{
            count = 0;
        }
        n /= 2;
    }
    cout << mx;

    return 0;
}
