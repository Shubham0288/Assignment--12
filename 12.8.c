//Write a recursive function to print the binary of the decimal number.
#include<stdio.h>
void DtoB(int);
int main()
{
    DtoB(25);
    return 0;
}
void DtoB(int n)
{
    if(n==1)
    {
        printf("1");
    }
    else
    {
        DtoB(n/2);
        printf("%d",n%2);
    }
}