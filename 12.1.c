//Write a recursive function to print first N natural numbers:
#include<stdio.h>
void Firstnatural(int);
int main()
{
    Firstnatural(10);
    return 0;
}
void Firstnatural(int n)
{
    if(n>0)
    {
        Firstnatural(n-1);
        printf("%d ",n);
    }
    
}