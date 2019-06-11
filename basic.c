#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even");
    }
    else
        if(n%2!=0)
    {
        printf("odd");
    }
    else
        printf("Invalid");
}
