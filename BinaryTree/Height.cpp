#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int val){
    data = val;
    left=right=NULL;
  }
};

  static int idx = -1;
  Node* buildTree(vector<int> preorder){
      idx++;
      if(preorder[idx] == -1){
        return NULL;
      }
      Node* root = new Node(preorder[idx]);
     root->left =  buildTree(preorder);  //left
     root->right =  buildTree(preorder); //right
     return root;
  }
   int height(Node* root){
    int leftHt;
    int rightHt;
       if(root == NULL){
        return 0;
       }
     leftHt = height(root->left);
     rightHt= height(root->right);

     return max(leftHt,rightHt)+1;
   }


   int countNodes(Node* root){
     int left;
    int right;
       if(root == NULL){
        return 0;
       }
     left = countNodes(root->left);
     right= countNodes(root->right);

     return left + right +1;
   }

   int sumNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftsum= sumNodes(root->left);
    int rightsum = sumNodes(root->right);

    return leftsum + rightsum + root->data;
   }

int main()
{  
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    cout<<"height : "<<height(root)<<endl;
    cout<<"Total Nodes: "<<countNodes(root)<<endl;
    cout<<"Sum of Nodes: "<<sumNodes(root)<<endl;
    return 0;
}