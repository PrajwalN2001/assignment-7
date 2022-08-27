#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("enter the two number");
    scanf("%d %d",&a,&b);
    if(b>=a)
    {
            for(i=a+1;i<b;i++)
            {
                for(j=i-1;j>1;j--)
                {
                    if(i%j==0)
                        break;
                }
                if(j==1)
                    printf("\n%d",i);
            }
    }
    else
    {
            for(i=b+1;i<a;i++)
            {
                for(j=i-1;j>1;j--)
                {
                    if(i%j==0)
                        break;
                }
                if(j==1)
                    printf("\n%d",i);
            }
    }


    return 0;

}

