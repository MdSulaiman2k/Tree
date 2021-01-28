#include<iostream>
#include "Tree\tree.h"
using namespace std ;
int main()
{
    BinaryTree binarytree ;
    int arr[10] = {5,8,3,4,7,9,1,2,5,10} ; 
    binarytree.binaryTree(arr , 10) ;
    binarytree.insertvalue(88);
    binarytree.displayTree();
    cout<<endl<<endl;
     binarytree.displayTree();
    binarytree.deleteTree();
     binarytree.displayTree();
   
    
}




// tower of hanoi

  