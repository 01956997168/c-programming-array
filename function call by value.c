#include<stdio.h>
void sum(int y){

int Sum=0;
Sum=Sum+y+1;
printf("Ans = %d",Sum);

}
void main(){

int x;
printf("Number x = ");
scanf("%d",&x);
sum(x);

//printf("%d",x);
}
