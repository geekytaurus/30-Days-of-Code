/**************************************************************************************************************

                              Day 1: Data Types | HackerRank #30daysOfCode
                             
                                       Author : MAMATA SHEE 
                                          ( @mpscoder )

***************************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int n; double dou; string st;
    
    // Read and save an integer, double, and String to your variables.
    cin>> n >> dou;
    cin.ignore();
    getline(cin, st);
    
    // Print the sum of both integer variables on a new line.
    cout << i+n << endl;
    
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << (d+ dou) <<endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s+st ;

    return 0;
