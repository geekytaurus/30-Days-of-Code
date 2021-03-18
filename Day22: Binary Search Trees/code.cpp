/*******************************************************************************************************

                           Day 22: Binary Search Trees | HackerRank #30daysOfCode
                           
*******************************************************************************************************/




#include <iostream>
#include <cstddef>


using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

		int getHeight(Node* root){
          //Write your code here
          
          if(root == NULL){
              return -1;
          }
          else{
            return  1 + max( getHeight(root->left), getHeight(root->right) );
          }
        }
};
