#include<stdio.h>
void main()
{
    int var=10;
    int *ptr=&var;
    printf("Value of var is %d\n",var);
    printf("Address of var is %p\n",&var);
    printf("Value of ptr is %p\n",ptr);
    printf("Value pointed to by ptr is %d\n",*ptr);
}