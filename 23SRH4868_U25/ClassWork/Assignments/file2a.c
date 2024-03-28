/*
Language:
C
Problem
statement : Write the logic to for incrementing Squared Number-Star Pattern.


Input
Format      : Take N as input of type
integer.


Output
Format     : Print incrementing Squared
Number-Star Pattern.

Constraints:


2<=N<=10


Sample Input:
5
Sample Output:
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25
*/
#include <stdio.h>
void R_triangle(int n)
{
    int num = 1;
    for(int i = 1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",num++);
            if(j != i)
            printf("*");
        }
            printf("\n");
    }
}
int main()
{
        int n;
        printf("enter the value of n:");
        scanf("%d",&n);
        if(n>=2 && n>=10)
        {
            printf("sample input:\n");
            R_triangle(n);
        }
        else{
            printf("invalid input");
        }
        
        
    
    return 0;
}
