/*
write a program to read Sum and Product of digits in a given number

Input Format:
Read a positive integer N

Output Format:
Print the sum and product of digits of the number

Examples:
Input: N = 12
Output:
sum =3
product = 2.

Input: N = 1012
Output:
 Sum = 4
product = 2
*/


//using while loop
#include<stdio.h>
int main()
{
    int n;
    printf("enter a +ve integer:");
    scanf("%d",&n);
    int a_sum = 0;
    int a_product = 1;
    int num;
    int zero = 0;
    //calculate sum and product 
    while(n>0)
    {
        num =n%10;
        a_sum += num;
        if(num != 0)
        {
            zero =1;
            a_product *= num;
        }
        n /= 10;
    }
    //print the sum and product
    printf("sum = %d\n",a_sum);
    if(zero){
        printf("product = %d\n",a_product);

    }
    else{
       printf("product = 0\n");
    }
    
    return 0;
}



