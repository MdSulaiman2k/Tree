#include<iostream>
#include "TribleLinkedList.h" 
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
                  fresh->parent = pretemp ;
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

 
  void putfalse(){
        node* temp = root ;
    if(temp != NULL){
        int i = 0 ;
        do{
           if(temp->left != NULL && temp->leftBool)
                temp = temp->left;
            else if(temp->right != NULL && temp->rightBool)
                temp = temp->right ;
            else{
                temp = temp->parent ;
                if(temp != NULL){
                  if(!temp->leftBool || temp->left == NULL)
                     temp->rightBool = false ;
                  else
                     temp->leftBool = false ;
                }
              }
        }while(temp != NULL  );
    }           
  }


  void displayTree(){
        node* temp = root ;
    if(temp != NULL){
        int i = 0 ;
        do{
           if(temp->left != NULL && !temp->leftBool)
                temp = temp->left;
            else if(temp->right != NULL && !temp->rightBool)
                temp = temp->right ;
            else{
                cout<<"values : "<<temp->value<<endl ;
                temp = temp->parent ;
                if(temp != NULL){
                  if(temp->leftBool || temp->left == NULL)
                     temp->rightBool = true ;
                  else
                     temp->leftBool = true ;
                }
              }
        }while(temp != NULL  );
        putfalse();
    }           
  }
  
 

  void deleteTree(){
    node* temp = root ;
    while(temp != NULL){
      if(temp->left != NULL )
                temp = temp->left;
            else if(temp->right != NULL )
                temp = temp->right ;
            else{
                node* pretemp = temp ;
                temp = temp->parent ;
                free(pretemp) ;  
                if(temp != NULL){
                if(temp->left == NULL )
                   temp->right = NULL ;
                else
                   temp->left = NULL ;
                    
                }
            } 
    }
    root = NULL ;
  }


};
