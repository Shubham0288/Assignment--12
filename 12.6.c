// Write a recursive function to print first N even natural numbers in reverse order.
#include<stdio.h>
void Even(int);
int main()
{
    Even(10);
    return 0;
}
void Even(int n)
{
    if(n>=1)
    {
        printf("%d ",2*n);
        Even(n-1);
    }
}