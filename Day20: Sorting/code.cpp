/*******************************************************************************************************

                          Day 20: Sorting | HackerRank #30daysOfCode
                         
*******************************************************************************************************/




#include<bits/stdc++.h>
using namespace std;


int sorting(int a[], int n){
    
    int numberOfSwaps = 0;
    for (int i = 0; i < n; i++) {
      
    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }
    
    // If no elements were swapped during a traversal, array is sorted
    if (numberOfSwaps == 0) {
        break;
    }
}

    return numberOfSwaps;

}


//--------------Driver Program--------------
int main() {
    /* Enter your code here.*/   
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int count = sorting(a, n);
    
    cout << "Array is sorted in " << count << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl; 
    
    return 0;
}
