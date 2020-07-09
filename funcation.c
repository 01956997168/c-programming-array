#include<stdio.h>
int sum(int s,int v){

return s+v;
}

void main(){

int a,b,result=0;
printf("A : ");
scanf("%d",&a);
printf("B : ");
scanf("%d",&b);
result=sum(a,b);
printf(" ans : %d",result);


}
