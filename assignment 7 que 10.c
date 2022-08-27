/*#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,sum=0,a;
    for(i=1;i<1000;i++)
    {
        for(j=i;j<=i;j++)
        {
            a=j%10;
            sum=sum+pow(a,j);
        }
        if(sum==i)
            {
               printf("%d",i);
            }
    }
    return 0;
}
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,num,count,sum,a,check,k;
    for(k=1;k<1000;k++)
    {
        num=k;
        count=k;
        check=k;
        sum=0;
        i=0;
    while(count!=0)
    {
        count=count/10;
        i++;
    }
    while(num!=0)
    {
        a=num%10;
        sum=sum+pow(a,i);
        num=num/10;
    }
    if(check==sum)
    {
            printf("\n%d",k);
    }

    }
}

