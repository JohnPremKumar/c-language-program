#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even");
    }
    else
        if(n%2!=0)
        {
          printf("Odd"); 
        }
    else
        printf("invalid");


}
