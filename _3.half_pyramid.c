#include<stdio.h>
void main(){
    /*
    1.Wap a program to print a half pyramid
                *                 
                * *              
                * * *          
                * * * *          
                * * * * *   
    */
   int row,cols;
   /*solution 1st row 1 star
              2st row 2 stars
              3st row 3 stars
              4st row 4 stars
              5st row 5 stars
   */
   //loop for rows
   for(row=1;row<=5;row++){
     //loop for cols
     for(cols=1;cols<=row;cols++){
        printf("* ");
        
     }
     //coming to next line after printing * in one row
     printf("\n");
   }
}