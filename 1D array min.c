#include<stdio.h>
void main(){

int i,j,a[10];
printf("Any number = ");
scanf("%d",&j);
for(i=0;i<j;i++){
    printf("A[%d] = ",i);
    scanf("%d",&a[i]);
}
for(i=0;i<j;i++){
    if(a[0]>a[i])
        a[0]=a[i];
}
printf("Min Number of = %d",a[0]);
}
