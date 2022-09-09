#include<stdio.h>
#include<conio.h>
int squareSumN(int n);
int main()
{
    int n;
    printf("Enter a number to calculate square of sum of that number\n");
    scanf("%d",&n);
    printf("sum of square of %d numbers is %d",n,squareSumN(n));
    return 0;
}

int squareSumN(int n)
{
    if(n==1||n==0)
      return 1;
      int s=n*n+squareSumN(n-1);
      return s;
}