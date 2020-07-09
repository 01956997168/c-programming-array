#include<stdio.h>
void main(){
int i,j,s,d;
int  a[50][50],b[50][50],c[50][50];
printf("Give row : ");
scanf("%d",&i);

printf("Give colam : ");
scanf("%d",&j);


for(s=0;s<i;s++){
    for(d=0;d<j;d++){
            printf("a[%d][%d] = ",s,d);
        scanf("%d",&a[s][d]);
    }
}
printf("A = ");
for(s=0;s<i;s++){
        printf("\t");
    for(d=0;d<j;d++){
            printf(" %d",a[s][d]);

    }
    printf("\n");
}



for(s=0;s<i;s++){
    for(d=0;d<j;d++){
            printf("b[%d][%d] = ",s,d);
        scanf("%d",&b[s][d]);
    }
}
printf("B = ");
for(s=0;s<i;s++){
        printf("\t");
    for(d=0;d<j;d++){
            printf(" %d",b[s][d]);

    }
    printf("\n");
}

for(s=0;s<i;s++){

    for(d=0;d<j;d++){
     c[s][d]=a[s][d]+b[s][d];
    }
}

printf("\n c = ");
for(s=0;s<i;s++){
        printf("\t");
    for(d=0;d<j;d++){
            printf(" %d",c[s][d]);

    }
    printf("\n");
}
}


