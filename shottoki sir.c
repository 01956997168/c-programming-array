#include<stdio.h>
void main(){

int i ,inPut,r;
printf("Input number : ");
scanf("%d",&inPut);
for(i=0;i<inPut;i++){
        if(inPut==1){
    printf("stop");
    break;
    }

    if(inPut%2==0){
        printf(" %d",3*inPut+1);
    }
    else{
        printf(" %d",inPut/2);
    }

}

}
