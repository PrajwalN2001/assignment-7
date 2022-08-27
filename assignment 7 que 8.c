#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the number");
    scanf("%d",&num);
    for(i=num+1;1;i++)
    {
        for(j=i-1;j>1;j--)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==1)
        {
        printf("the next prime number is %d",i);
        break;
        }
    }
    return 0;

}
