//Write a recursive function to print the first N odd numbers.
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
        Odd(n-1);
        printf("%d ",2*n-1);
    }
}
/*
#include<stdio.h>
void Odd(int n,int i,int count){
    if(count==n){
        return;
    }
    if(i%2!=0){
        printf("%d\n",i);
        count++;
    }
    Odd(n,i+1,count);
}
int main()
{
    Odd(10,1,0);
    return 0;
}*/