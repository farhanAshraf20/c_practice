#include<stdio.h>  
#include <string.h>    
struct employee      
{   int id;      
    char name[50];      
}e1,e2;  //declaring e1 variable for structure    
int main( )    
{       
   e1.id=101;    
   strcpy(e1.name, "Farhan");//copying string into char array    
   //printing first employee information    
   printf( "employee 1 id : %d\n", e1.id);    
   printf( "employee 1 name : %s\n", e1.name);    


   e2.id=102;    
   strcpy(e2.name, "Ashraf");//copying string into char array    
//printing second employee information
   printf( "employee 1 id : %d\n", e2.id);    
   printf( "employee 1 name : %s\n", e2.name);  
return 0;  
}    