#include<stdio.h> 
int main(){

    int i,k,rows;

    scanf("%d",&rows);

    for (i=0;i<rows;i++){

        for (k=0;k<i+1;k++){
        printf("* ");
        }

        printf("
");

    }
}