/*
write a program to check whether product of digits at even places is divisibke by sum of digits at odd place of a number

exaples:

input:
2157
output:
True

Input:
1234
output:
True
*/
#include<stdio.h>
int main()
{
    long long int n1;
    int n;
    int e_pro = 0;
    int o_sum = 1;
    int pos = 1;

    printf("enter a number:");
    printf(" ");
    scanf("%lld",&n1);

    while(n1>0)
    {
    n=n1%10;
    if(pos %2 != 0)
    {
        o_sum += n;

    }
    else{
        e_pro *= n;
    }
    n1 /= 10;
    pos++;
    }
    printf("output:\n");
    printf(" ");
    if(e_pro != 0 && o_sum != 0 && e_pro % o_sum == 0){
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}