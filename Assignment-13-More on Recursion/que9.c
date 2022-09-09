#include<stdio.h>
#include<conio.h>
int countDigits(int n,int count);
int main()
{
    int n,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("digits in %d is %d",n,countDigits(n,count));
    return 0;
}

int countDigits(int n,int count)
{  

    if(n==0)
    return count;
   
        count++;
        countDigits(n/10,count);
}