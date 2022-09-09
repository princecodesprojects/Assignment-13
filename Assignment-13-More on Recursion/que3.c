#include<stdio.h>
#include<conio.h>
int sumOfN(int n);
int main()
{
    int n;
    printf("Enter any number to calculate sum \n");
    scanf("%d",&n);
    printf("sum of %d even numbers is %d",n,sumOfN(n));
    return 0;
}

int sumOfN(int n)
{
    if(n==1||n==0)
    return 2;
    int s=n*2+sumOfN(n-1);
    return s;
}