#include<stdio.h>
void main(){

int i,j,z,outPut,total=0,result=0;
scanf("%d",&outPut);
for(i=1;i<=outPut;i++){
    for(j=outPut-1;j>=i;j--){
        printf(" ");
    }
    for(z=1;z<=2*i-1;z++){
        printf("*");
        total=z;
    }
    printf("\n");
}
for(i =1;i<=total/2;i++){
    for(j=1;j<=i;j++){
        printf(" ");
    }
    result=total;

    for(z=i;z<result-i;z++){
        printf("*");
    }
    printf("\n");
}
}
