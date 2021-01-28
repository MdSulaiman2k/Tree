class node{

   public :

   int value ; 
   node* left ;                                     
   node* right ;

   node(){
      left = NULL  ;
      right = NULL ;
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