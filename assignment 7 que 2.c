#include<stdio.h>
int main()
{

    int a=0,b=1,c,i,num;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("\n%d",a);

        c=a+b;
        a=b;
        b=c;
    }

}

