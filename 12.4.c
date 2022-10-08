// Write a recursive function to print the first N odd numbers in reverse order.
#include<stdio.h>
void Odd(int);
int main()
{
    Odd(10);
    return 0;
}
void Odd(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        Odd(n-1);
    }
}