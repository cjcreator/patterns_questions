#include<stdio.h>
void main(){
    /*
    1.Wap a program to print floyd's triangle
            1
            2 3
            4 5 6
            7 8 9 10
            11 12 13 14 15
            
    */
   int row,cols,num=1;
   
   //loop for rows
   for(row=1;row<=5;row++){
     //loop for cols
     
     //stars in a row
     for(cols=1;cols<=row;cols++){
        printf("%d ",num);
        num++;
     }
     //coming to next line after printing * in one row
     printf("\n");
   }
}