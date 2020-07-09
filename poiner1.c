#include<stdio.h>
void main( void )

{

int x = 10;

int *p;

p = &x;

int y = *p;

printf("Address of integer variable x: %d\n", &x);

printf("Value stored in the memory area of x: %d\n", x);

printf("Address of integer pointer variable *p: %d\n", &p);

printf("Address stored in the area of pointer *p: %d\n", p);

printf("Address of integer variable y: %d\n", &y);

printf("Value pointed to by the pointer *p: %d\n", *p);

printf("Value stored in the memory area of variable y: %d\n", y);

}
