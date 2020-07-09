#include<stdio.h>
void main( void )

{

int i;

float r[5] = {22.5,34.8,46.8,59.1,68.3};

printf("1st element: %.2f\n", r[0]);

printf("1st element: %.2f\n",*r );

printf("3rd element: %.2f\n", r[2] );

printf("3rd element: %.2f\n", *(r+2));

float *p;

p = r; //&r[0]

printf("1st element: %.2f\n", p[0] );

printf("1st element: %.2f\n", *p );

printf("3rd element: %.2f\n", p[2]);

printf("3rd element: %.2f\n", *(p+2));

for(i=0, p=r; i<5; i++, p++)

printf("Element %d is: %.2f\n", i+1, *p);

}
