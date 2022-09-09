#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
    int n,s;
    printf("Enter any number to calculate sum of factorial of that number\n");
    scanf("%d",&n);
   s=factorial(n);
    printf("sum of factorial of %d is %d",n,s);
    getch();
    return 0;
}

int factorial(int n)
{
    int s;
    if(n==0||n==1)
       return 1;
        s=n*factorial(n-1);
        return s;
}
