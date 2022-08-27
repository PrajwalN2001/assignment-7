#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,j,num,count,sum=0,a,check;
    printf("enter the number");
    scanf("%d",&num);
    count=num;
    check=num;
    while(count!=0)
    {
        count=count/10;
        i++;
    }
    for(j=1;j<=i;j++)
    {
        a=num%10;
        num=num/10;
        sum=sum+pow(a,i);
    }
    if(check==sum)
        printf("it is a pallidrom");
    else
        printf("not an pallidrom");

}
