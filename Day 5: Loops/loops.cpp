/***************************************************************************************************************

                              Day 5: Loops | HackerRank #30days-of-code
                              
                                   Author : MAMATA SHEE
                                      ( @mpscoder )
                                      
*****************************************************************************************************************/                                      




#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for(int i=1; i <=10; i++){
        cout << n << " x " << i << " = " << n*i <<endl; 
    }
  
    return 0;
}
