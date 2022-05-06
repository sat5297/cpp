#include<bits/stdc++.h>
using namespace std;

void performRecursion(Node* root, int &minDepth, int currDepth){
    if(root == NULL){
        minDepth = min(minDepth,currDepth);
        return;
    }
    performRecursion(root->left, minDepth,currDepth+1);
    performRecursion(root->right,minDepth,currDepth+1);
}

void shortestLeaf(){
    
    
    
}


int main()
{
     
}
