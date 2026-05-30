#include<stdio.h>
int global=5;
void disp()
{
    printf("%d",global);
}
int main()
{
    printf("Before interchanging:");
    disp();
    
    printf("After interchanging:");
        global=10;
    disp();
    return 0;

}