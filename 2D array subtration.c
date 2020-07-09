#include<stdio.h>
void main()
{
    int i,j,numberRow,numberColam;
    int a[10][10],b[10][10],c[10][10];
    printf("Row = ");
    scanf("%d",&numberRow);
    printf("Colam = ");
    scanf("%d",&numberColam);
    printf("A = \n");
    for(i=0; i<numberRow; i++)
    {
        for(j=0; j<numberColam; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nB =\n");
    for(i=0; i<numberRow; i++)
    {
        for(j=0; j<numberColam; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nC =\n");
    for(i=0; i<numberRow; i++)
    {
        for(j=0; j<numberColam; j++)
        {
            printf(" %d",c[i][j]=a[i][j]-b[i][j]);
        }
        printf("\n");
    }
}
