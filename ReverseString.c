#include<stdio.h>
int main()
{
    int i;
    char ch[100];
    for(i=0;i<=10;i++)
    {
    scanf("%c",&ch[i]);
    }
    for(i=10;i>=0;i--)
    {
        printf("%c",ch[i]);
    }

}
