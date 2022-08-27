#include<stdio.h>
int main()
{

    int a,b,c,i,num;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    if(a>=b)
    {

        for(i=a;i>=1;i--)
        {
            if(a%i==0 && b%i==0)
            {
            break;
            }
        }
    }
    else
    {
        for(i=b;i>=1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                break;
            }
        }
    }
    if(i==1)
        printf("numbers are co-prime");
    else
        printf("numbers are not co-prime");

    return 0;

}

