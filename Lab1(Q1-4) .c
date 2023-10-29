                                                   //LAB1:-
#include <stdio.h>
#include <stdlib.h>
//Q4 Write a c program to convert decimal to binary using functions.
void decimaltobinary(int n){
           if (n>0){
            decimaltobinary(n/2);
            printf("%d",n%2);
 }          }
int main()
{
       int decimalnumber;
       printf("Enter number:");
       scanf("%d",&decimalnumber);
       if (decimalnumber==0){
        printf("Binary:0\n");
       }else{
           printf("Binary:");
           decimaltobinary(decimalnumber);
            printf("\n");
       }
//Q1 write a c program that accepts an employee's id toyal worked hours in a month and amount received per hour .Print the id and salary of the employee.
       int employee;
       printf("Enter employee's ID\n");
       scanf("%d",&employee);
       float totalworkedhours,amount,salary;
       printf("Enter worked hours in a month\n");
       scanf("%f",&totalworkedhours);
       printf("Enter amount received per hour\n");
       scanf("%f",&amount);
       printf(" Salary:%.2 f",totalworkedhours*amount);
       printf("employee id :%d\n",employee);
//Q2
       int height,width;
       printf("enter height\n");
       scanf("%d",&height);
       printf("Enter width\n");
       scanf("%d",&width);
       int area,perimeter;
       printf("Area:%d\n",height*width);
       printf("Perimeter:%d\n",2*(height+width));
//Q3
       int heightincentimeters;
       printf("Enter height in cm:%d\n");
       scanf("%d",&heightincentimeters);
       if(heightincentimeters<150){
           printf("Dwarf");
       }else if (heightincentimeters=150){
           printf("Average");
       }else if(heightincentimeters>=165){
           printf("Tall");
       }else{
           printf("Invalid height");
       }
    return 0;
}
