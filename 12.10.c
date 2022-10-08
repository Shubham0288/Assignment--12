// Write a recursive function to print the number in reverse order.
#include<stdio.h>
int Reverse(int);
int sum=0;
int main()
{
    int num,rev;
    printf("Enter a number : ");
    scanf("%d",&num);
    rev=Reverse(num);
    printf("Reverse of the number is %d",rev);
    return 0;
}
int Reverse(int n)
{
    int rem;
    if(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        Reverse(n/10);   
    }
    else
    {
        return sum;
    }
}