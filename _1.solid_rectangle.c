#include<stdio.h>
void main(){
    /*
    1.Wap a program to print a solid rectangle
                * * * * *
                * * * * *
                * * * * *
                * * * * *
                * * * * *   
    */
   int row,cols;
   //loop for rows
   for(row=1;row<=5;row++){
     //loop for cols
     for(cols=1;cols<=5;cols++){
        printf("* ");
     }
     //coming to next line after printing * in one row
     printf("\n");
   }
}