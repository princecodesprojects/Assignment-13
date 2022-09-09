#include<stdio.h>
#include<conio.h>

void hcf(int a,int b)
{
    if(a%b==0||b%a==0)
   {
      if(a>b)
      printf("HCF is %d ",b);
      else if(a<b)
     printf("HCF is %d ",a);
   }
    else if(a>b)
    hcf(a%b,b);
    else if(a<b)
    hcf(a,b%a);
}

int main()
{
    int a,b;
    printf("Enter two number to get HCF of that number\n");
    scanf("%d%d",&a,&b);
    hcf(a,b);
    return 0;
}