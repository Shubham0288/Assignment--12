//Write a recursive function to print squares of the first N natural numbers.
#include<stdio.h>
void Square(int);
int main()
{
    Square(10);
    return 0;
}
void Square(int n)
{
    if(n>0)
    {
        Square(n-1);
        printf("%d ",n*n);
    }
}