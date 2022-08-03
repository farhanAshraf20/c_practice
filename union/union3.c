#include <stdio.h>
#include <string.h>
 
union student 
{
            char name[20];
            char subject[20];
            float percentage;
};
 
int main() 
{
    union student rec1;
    union student rec2;
 
    // assigning values to record1 union variable
       strcpy(rec1.name, "farhan");
       //rec1.name = "farhan";
       strcpy(rec1.subject, "Maths");
       rec1.percentage = 86.50;
 
       printf("Union record1 values example\n");
       printf(" Name       : %s \n", rec1.name);
       printf(" Subject    : %s \n", rec1.subject);
       printf(" Percentage : %f \n\n", rec1.percentage);
 
    // assigning values to record2 union variable
       printf("Union record2 values example\n");
       strcpy(rec2.name, "farhan");
       //rec2->name = "ashraf";
       printf(" Name       : %s \n", rec2.name);
 
       strcpy(rec2.subject, "Physics");
       printf(" Subject    : %s \n", rec2.subject);
 
       rec2.percentage = 60.50;
       printf(" Percentage : %.1f \n", rec2.percentage);
       return 0;
}