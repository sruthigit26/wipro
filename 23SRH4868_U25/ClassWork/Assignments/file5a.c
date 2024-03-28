/*
 Write a program to Count number of ways to divide a number
 in 4 parts.

 Input Format:
 First Line Of Input Contains T test cases
 Second line of Input Contains a positive integer n,

 Output Format:
 Print the count number of ways for division can take place.

 Examples :

 Input:
 1
   5 => 1 + 1 + 1 + 2

 Output: 1

 Input:
 1
 6
   2 + 2 + 1 + 1
   1 + 1 + 1 + 3
 Output: 2

 Input:1
 
   8
 Output: 5
1+1+1+5
2+2+2+2
2+2+1+3
1+1+2+4
3+3+1+1
*/
#include<stdio.h>
int countways(int n)
{
    int count = 0;
    for(int a=1;a<=n/4;a++)
    {
        for(int b=a;b<=n/3;b++)
        {
            for(int c=b;c<=n/2;c++)
            {
                int d = n - (a+b+c);
                if(d>=c)
                {
                    if(a+b+c+d == n)
                    {
                    count++;
                    if(count == 1)
                    printf("input:\n");
                    printf("\n%d + %d + %d + %d = %d",a,b,c,d);
                    }
                }
            }
        }
    }
    return count;
}
int main()
{
    int t,n;
    printf("enter the number of test cases:");
    scanf("%d",&t);
    while(t--)
    {
        
        printf("enter the +ve integer:");
        scanf("%d",&n);

        int ways = countways(n);
        printf("number of ways to divide %d into 4 parts: %d\n",n,ways);
    }
    return 0;
}