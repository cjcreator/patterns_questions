#include<stdio.h>
void main(){
    /*
    1.Wap a program to print this pattern
            12345
            1234
            123
            12
            1
            
    */
   int row,cols;
   
   //loop for rows
   for(row=5;row>=1;row--){
     //loop for cols
     
     //stars in a row
     for(cols=1;cols<=row;cols++){
        printf("%d ",cols);
     }
     //coming to next line after printing * in one row
     printf("\n");
   }
}