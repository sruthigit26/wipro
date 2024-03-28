//using nested if-else statements write a program 
//to find the greatestof three numbers
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter three numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2)
    {
      if(n1>n3)
      {
        printf("%d is the greatest number \n",n1);

      }
      else{
        printf("%d is the greatest number \n",n3);
      }
    }
     else{
        if(n2>n3)
        {
            printf("%d is the greatest number \n",n2);
        }
        else{
            printf("%d is the greatest number \n",n3);
        }
      }
      return 0;
}

