//write a program by using goto statements print the multiplication of tables
#include<stdio.h>
int main()
    {
       int n;
       int i=1;
       printf("\n enter the number to pprint a multiplication table:");
       scanf("%d",&n);
       start:
       printf("%d x %d = %d\n",n,i,n*i);
       i++;
       if(i<=10)
       {
        goto start;
       }
       return 0;
    }

