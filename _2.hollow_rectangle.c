#include<stdio.h>
void main(){
    /*
    1.Wap a program to print a hollow rectangle
                * * * * *
                *       *
                *       *
                *       *
                * * * * *   
    */
   int row,cols;
   //loop for rows
   for(row=1;row<=5;row++){
     //loop for cols
     for(cols=1;cols<=5;cols++){
        if(row==1||row==5 ||cols==1||cols==5)
        printf("* ");
        else
        //for hollow spaces
        printf("  ");
     }
     //coming to next line after printing * in one row
     printf("\n");
   }
}