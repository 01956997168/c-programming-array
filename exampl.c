#include<stdio.h>
void main()
{

    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    if(a<b)
    {
        a=b-a;
        b=b-a;
        a=a+b;
    }else{
        b=a-b;
        a=a-b;
        b=b+a;
    }
    printf("a=%d b=%d ",a,b);

}
