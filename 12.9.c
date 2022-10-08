//Write a recursive function to print octal of the given binary number.
#include<stdio.h>
void OtoD(int);
int main()
{
    OtoD(45);
    return 0;
}
void OtoD(int n)
{
    if(n<=7)
    {
        printf("%d",n);
    }
    else
    {
        OtoD(n/8);
        printf("%d ",n%8);
    }
}