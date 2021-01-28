#include<iostream>
#include "doubleLinkedList.h" 
using namespace std ;
class BinaryTree{
  public :
  node* root ;
  
  BinaryTree(){
     root = NULL ;
  } 

  void  binaryTree(int* arr , int n){
  	    for(int i = 0 ; i<n ; i++){
             insertvalue(arr[i]) ;           
           }
    }

  void insertvalue(int value ){
  	    node* temp = root ; 
        if(root != NULL ){
            node* pretemp = temp ; 
            while(temp !=  NULL){
           	    pretemp = temp ; 
           	    if(temp->value > value )  temp = temp->left ; 
           	    else       temp = temp->right ; 
            }
            	node* fresh = new node ;
            	if(fresh != NULL ){
            		fresh->value = value ;
                	if(pretemp->value > value )
                    	pretemp->left = fresh ; 
                	else 
                        pretemp->right = fresh ; 
                }
            
        }else{
        	root = new node ;
        	if(root != NULL )  root->value = value ; 
        	else cout<<"boundary Error " ;
        }
  }

  node* binaryTreeSearch(int value){
         node* fresh =  root ;
         bool found = false ;
         while(fresh != NULL && !found ){
         	if(fresh->value == value)  found = true ;
         	else if(fresh->value > value ) fresh = fresh->left ;
         	else    fresh = fresh->right ; 
         }
         return fresh ;
        
  }

 int  minvalue(){
    node* temp = root ;
    while(temp->left != NULL ){
       temp = temp->left ;
    }
    return temp->value ; 
  }

  int maxvalue(){
    node* temp = root ;
    while(temp->right != NULL){
      temp = temp->right ;
    }
    return temp->value;
  }

void deleteTree(){
    node* temp = root ;
    node* pretemp =  root ;
    while(temp != NULL){
            if(temp->left != NULL ){
                pretemp = temp ;
                temp = temp->left;}
            else if(temp->right != NULL ){
                pretemp = temp ;
                temp = temp->right ;}
            else{
                free(temp) ;
                if(temp == root){
                    temp = NULL ;
                    root = NULL ;}
                else if(pretemp->left != NULL){
                    pretemp->left = NULL ;
                    if(pretemp->right != NULL)
                       temp = pretemp->right ;
                    else
                       temp = root ;
                }
                else{
                    pretemp->right = NULL ;
                     temp = root ;
                }
              } 
    }
  }

 
};
