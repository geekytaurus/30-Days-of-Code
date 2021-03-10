/***********************************************************************************************************

                        Day 14: Scope | HackerRank #30daysOfCode
                        
************************************************************************************************************/



#include<bits/stdc++.h>
using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	Difference(vector<int> elements){
        this->elements = elements;
    }
    
    void computeDifference(){
        int mx = 0;
        
        for(int i = 0; i < this->elements.size(); i++){
            for(int j = 0; j < this->elements.size(); j++){
                int ab = abs(elements[i] - elements[j]);
                mx = max(mx, ab);
            }
        }
        maximumDifference = mx;
    }
}; 



//-------------------Driver  Program-------------------
int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
