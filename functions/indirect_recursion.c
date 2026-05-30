#include<stdio.h>
int flagA(int n);
int flagB(int n);

int flagA(int n)
{
    if(n>0)
    {
        printf("%d",n);
        return flagA(n-2);

    }
}
   
   int flagB(int n)
   { 
     if(n>0)
     {
          printf("%d",n);
          return flagA(n/2);
     }
    
}
int main()
{
    flagA(10);
    return 0;
}