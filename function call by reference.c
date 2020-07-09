#include<stdio.h>
void sum(int *y){

*y+=1;
printf("ans = %d",*y);

}
void main(){
int x;
scanf("%d",&x);
sum(&x);
}
