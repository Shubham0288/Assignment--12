//Write a recursive function to print the first N even numbers.
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
        Even(n-1);
        printf("%d ",2*n);
    }
}