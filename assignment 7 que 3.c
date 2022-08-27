#include<stdio.h>
#include<math.h>
int main()
{
    int a=0,b=1,c,num,i;
    printf("enter the number");
    scanf("%d",&num);
   for(i=1;1;i++)
   {
        c=a+b;
        a=b;
        b=c;
       if(a==num)
       {
        printf("it is an fibonacii number");
        break;
       }
       if(a>num)
       {
            printf("it is an not an fibonacii number");
            break;

       }

   }

}
