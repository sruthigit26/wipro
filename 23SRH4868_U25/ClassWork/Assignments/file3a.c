/*
Write a c program to print alphabet triangle.
Input: 5
Output:

        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
*/
#include <stdio.h>
void triangle(int n)
{
    int i,j;
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%c",'A' + j);
        }
        for(j =i-1;j>=0;j--)
        {
            printf("%c", 'A' + j);
        }
            printf("\n");
    }
}
int main()
{
    int n;
    printf("sample input:");
    scanf("%d",&n);      
    triangle(n);
    return 0;
}

