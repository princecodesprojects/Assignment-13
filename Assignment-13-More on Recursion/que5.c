#include<stdio.h>
#include<conio.h>
int sumOfDigits(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("sum of %d numbers digits is %d",n,sumOfDigits(n));
    return 0;
}

int sumOfDigits(int n)
{
    if(n>0)
    {
        int r=n%10;
        r=r+sumOfDigits(n/10);
        return r;
    }
}