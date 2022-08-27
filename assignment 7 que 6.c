#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=100;i++)
    {
        for(j=i-1;j>1;j--)
        {
            if(i%j==0)
                break;
        }
        if(j==1)
            printf("\n%d",i);
    }
    return 0;

}
