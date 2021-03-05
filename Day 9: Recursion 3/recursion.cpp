/*********************************************************************************************************

                               Day 9: Recursion 3 | HackerRank #30daysOfCode
                                         
                                        Author : MAMATA SHEE
                                           ( @mpscoder )
                                           
**********************************************************************************************************/



#include <bits/stdc++.h>
using namespace std;


//---------function to compute the factorial-----------
int factorial(int n) {
    if (n <= 1){
        return 1;
    }
    return n * factorial(n - 1);
}


int main()
{
    int n; 
    cin >> n;
    
    int result = factorial(n);
    cout << result ;

    return 0;
}
