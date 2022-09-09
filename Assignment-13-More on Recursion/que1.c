#include<stdio.h>
#include<conio.h>
int sumOfN(int n);
int main()
{
    int n;
    printf("Enter any number to calculate sum \n");
    scanf("%d",&n);
    printf("sum of first  %d numbers is %d",n,sumOfN(n));
    return 0;
}

int sumOfN(int n)
{
    if(n==1||n==0)
    return 1;
    int s=n+sumOfN(n-1);
    return s;
}