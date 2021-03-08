/************************************************************************************************************

                         Day 2: Operators | HackerRank #30daysOfCode

                               
************************************************************************************************************/   



#include <bits/stdc++.h>
using namespace std;


void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip, tax, total_cost;
    tip = meal_cost * tip_percent / 100;
    tax = meal_cost * tax_percent / 100;
    
    total_cost = meal_cost + tip + tax;
    
    cout << round(total_cost);
}


int main()
{
    double meal_cost;
    cin >> meal_cost;
   
    int tip_percent;
    cin >> tip_percent;
    
    int tax_percent;
    cin >> tax_percent;
    
    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
