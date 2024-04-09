#include <iostream>
using namespace std;
#define Max 100
int stac[Max];
int top= -1,a,num;
void check();
void push( );
void pop ();
void saturate();
void traverse();
;

    int main() {
    int i;
     check ();
    cout<<"1.Push/add an element into the     stack"<<endl;
    cout<<"2.pop/remove an element from the stack"<<endl;
    cout<<"3saturate the stack with     values"<<endl;
    cout<<"4.traves The stack (only after u have sarurated it)"<<endl;
   cout<<"5.Exit"<<endl;
   cout <<"Enter ur option"<<endl;
   cin>>i; 
   while (i!=5){
          
     if(i==1){
         
    
             
             push ();
             break ;
            } 
         else if(i==2){
             pop();
             break ;
         }
         
         
     
     else if(i==3){
     saturate ();
     break ;
         
     }
          else if(i==4){
              traverse ();
              break ;
          }
          
         else if(i==5){
              break ;
          }
          else{
              cout <<"invalid choice "<<endl;
             break;
          }
          
          
   }

    return 0;
}

void push( ){
//This function add an element in the stack
int val ;
cout <<" Enter the number u want to add into the stack"<<endl;
    cin>>val;
    if(a==0){
        
        val=stac[top];
        cout<< val<<"was added to ur stack"<<endl;
    
    } 
    else{ 
    
    cout <<"The stack is full can't add another value"<<endl;
    
    }
    }
    
    
    void pop(){
    	int j;
    //This function  pops an element from the stack
saturate();
    
   
        
       cout<<stac[top]<<"Was removed"<<endl;
       stac[top]=0;
        top--;
        cout<<"The new stack is: "<<endl;
        for(j=0;j<num;j++){
        	
        	cout<<stac[j]<<endl;
        	
        	
        	}
    } 
   
     


void saturate(){
    //This function allow the user to saturate the stack with values provided it is empty 
    
   
    cout <<"Enter the numbers of values u wnat to fill in the stack"<<endl;
     cout <<"Enter thw values in tje stack"<<endl;
    cin>>num;
if(a==0){
    for(top=0;top<num;top++){
        
        
        
        cin>>stac[top];
    }
    
    
    
    
}  
    
    
    
}
void traverse () {
    int b; 
    saturate ();
    cout<<"Enter the value u want to check in the stack "<<endl;
    cin>>b;
 
 for (top=0;top<=Max-1;top++){
     
     if(stac[top]==b){
         
         cout<<"The number is found in the stack at position number"<<top<<endl;
     }
     
     
     
     
 }
    
}



 void check(){
     //This  function checks if the stack is empty or full.
     // if it is empty it assign the value 0 to a
    //if it is full it assign the value 1 to a
     if( top<=-1){
        a=0;
        top++ ;
     }
    else if ( top>=Max-1)
     {
     
        
         a= 1;
         
     }
     
     
  
     
 }

