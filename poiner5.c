#include<stdio.h>
void swap(int *a, int *b);

void main(void){

int num1=5,num2=10;

swap(&num1,&num2);

/* address of num1, num2 is passed */

printf("Number1 = %d\n", num1);

printf("Number2 = %d", num2);

}

void swap(int *a, int *b){

//a,b points to &num1,&num2 respectively

int t;

t = *a;

*a = *b;

*b = t;

}
