#include<stdio.h>
void main(){

int i,a[10],j;
printf("Give the any number : ");
scanf("%d",&j);
for(i=0;i<j;i++){

    printf("A[%d] = ",i);
    scanf("%d",&a[i]);
}
for(i=0;i<j;i++){
   if( a[0]<a[i]){
    a[0]=a[i];
   }
}
printf("Max number is = %d",a[0]);
}
