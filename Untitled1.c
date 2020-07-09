
#include <stdio.h>

int main()
{
    int i, j, line;

    printf("Enter number of line : ");
    scanf("%d", &line);

    for(i=1; i<=line; i++)
    {
        for(j=i; j<line; j++)
        {
            printf(" ");
        }


        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=1; i<=line; i++)
    {

        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(line*2 -(2*i-1)); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/*
#include <stdio.h>

int main()
{
    int i, j, lower, upper, sum;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("All Perfect numbers : ");


    for(i=lower; i<=upper; i++)
    {
        sum = 0;


        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }


        if(sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int f, l,i,fact,j;
    printf("Enter first Number");
    scanf("%d",&f);
    printf("Enter last Number");
    scanf("%d",&l);
    printf("Prime Numbers are: \n");
    for(i=f; i<=l; i++)
    {
        fact=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
  int first = 0, second = 1, third, n, i;

  printf("Enter the number of terms of Series : ");
  scanf("%d", &n);

  printf("%d %d", first, second);

  for (i = 3; i <= n; i++)
  {
    third = first + second;
    printf(" %d", third);
    first = second;
    second = third;
  }

  return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int i, j, input, check;

    printf("Enter any inputber : ");
    scanf("%d", &input);

    printf("All Prime Factors : ");

    for(i=2; i<=input; i++)
    {

        if(input%i==0)
        {

            check = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    check = 0;
                    break;
                }
            }

            if(check==1)
            {
                printf("%d\t", i);
            }
        }
    }

    return 0;
}
*/
/*

#include<stdio.h>

int main()
{

    int base=3, power, i=1, result=1, sum=1;
    scanf("%d", &power);

    while(i<power){
        result*=base;
        sum+=result;
        i++;
    }
    printf("%d\n",result);
    printf("%d", sum);
}



    #include <stdio.h>

    int main()
    {
       int n, temp, sum = 0, r;

       printf("Enter an integer\n");
       scanf("%d", &n);

       temp = n;

       while (temp != 0)
       {
          r = temp % 10;
          sum       = sum + r;
          temp         = temp / 10;
       }

       printf("Sum of digits of %d = %d\n", n, sum);

       return 0;
    }


*/


