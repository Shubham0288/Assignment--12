//Write a recursive function to print first N natural numbers in reverse order.
#include<stdio.h>
void Reversenatural(int);
int main()
{
    Reversenatural(10);
    return 0;
}
void Reversenatural(int num)
{
    if(num>0)
    {
        printf("%d ",num);
        Reversenatural(num-1);
    }
}