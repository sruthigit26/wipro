/*
Program to Check if product of digits of a number at even and odd places is equal.
Input:

2841
Output:
 Yes

Input:

4324
Output:
No
*/
#include<stdio.h>
int main()
{
    long long int n1;
    int n;
    int e_pro = 1;
    int o_pro = 1;
    int pos = 1;

    printf("enter a number:");
    scanf("%lld",&n1);

    while(n1>0)
    {
    n=n1%10;
    if(pos %2 == 0)
    {
        e_pro *= n;

    }
    else{
        o_pro *= n;
    }
    n1 /= 10;
    pos++;
    }
    if(e_pro == o_pro){
        printf("Yes\n");

    }
    else
    {
        printf("No\n");
    }
    return 0;
}