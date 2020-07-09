#include<stdio.h>
void main()
{
    int i,j,anyNumber;
    int v,change=0,a[9];
    printf("Any Number of = ");
    scanf("%d",&anyNumber);
    for(i=0; i<anyNumber; i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<anyNumber; i++)
    {
        for(j=i+1; j<anyNumber; j++)
        {
            if(a[i]<a[j]) {}
            else
            {
                change=a[j];
                a[j]=a[i];
                a[i]=change;
            }
        }
    }
    for(i=0;i<anyNumber;i++)
    printf("%d ",a[i]);
}
