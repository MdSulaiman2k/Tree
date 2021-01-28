class node{

   public :

   int value ; 
   node* parent ;
   node* left ;                                     
   node* right ;
   bool  leftBool ;
   bool  rightBool ; 

   node(){
      parent = NULL    ;
      left = NULL      ;
      right = NULL     ;
      leftBool = false ;
      rightBool = false;
   }

   void setvalues(int v , node* link , node* leftlink){              
        value =  v ;
        right = link ;
        left  = leftlink ;
   }
   void setvalue(int v ) {
       value = v ; 
    }
 
   void  setright(node* link){
       right = link ;
   }

   void  setleft(node* link){
       left = link ;
   }
   
   int getvalue( ) {
       return value ; 
   }

   node* getright( ){
          return right ; 
   }

   node* getleft( ){
          return left ; 
   }

   ~node(){
       
   }
 
};