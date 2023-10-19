#include<stdio.h>
void main(){
    /*
    1.Wap a program to print inverted half pyramid (rotated by 180 degree)          
                        *         
                      * *           
                    * * *
                  * * * *
                * * * * *    
    */
   int row,cols;
   /*solution 1st row 4 space and 1 stars
              2st row 3 space and 2 stars
              3st row 2 space and 3 stars
              4st row 1 space and 4 stars
              5st row 0 space and 5 stars
   */
   //loop for rows
   for(row=1;row<=5;row++){
     //loop for cols
     //spaces in rows
     for(cols=1;cols<=5-row;cols++){
        printf("  ");
     }
     //stars in a row
     for(cols=1;cols<=row;cols++){
        printf("* ");
     }
     //coming to next line after printing * in one row
     printf("\n");
   }
}