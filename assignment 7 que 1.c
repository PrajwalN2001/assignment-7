#include<stdio.h>
int main()
{

    int a=0,b=1,c,i,num;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i==num)
        printf("\n the last term of fibonacci series is %d",a);

        c=a+b;
        a=b;
        b=c;
    }

}
