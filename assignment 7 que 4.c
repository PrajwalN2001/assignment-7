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
            printf("HCF OF THE NUMBER IS %d",i);
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
                printf("HCF OF THE NUMBER IS %d",i);
                break;
            }
        }
    }
    return 0;

}

