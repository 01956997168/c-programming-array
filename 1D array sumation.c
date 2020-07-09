#include<stdio.h>
void main(){

int a[10];int i,j,sum=0;
printf("any number = ");
scanf("%d",&j);
for(i=0;i<j;i++){
    printf("a[%d] = ",i);
    scanf("%d",&a[i]);
}
for(i=0;i<j;i++){
    sum=sum+a[i];
}
printf("%d",sum);
}
