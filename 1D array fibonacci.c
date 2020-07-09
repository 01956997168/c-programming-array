#include<stdio.h>
void main(){

int a[10],j,i;
printf("any number of = ");
scanf("%d",&j);
a[0]=0;
a[1]=1;
for(i=2;i<j;i++){
    a[i]=a[i-1]+a[i-2];
}
for(i=0;i<j;i++){
    printf("%d ",a[i]);
}
}
