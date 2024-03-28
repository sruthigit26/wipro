/*write a program to read sum and product of digits in a given number
 
  input format: read a positive integer N
  output format: print the sum and product of digits of the number

example: input:n=12
output sum=3
product=2

input n=1012
output: sum=4 
product=2
*/

#include<stdio.h>
void read(int n )

{
	int digit;
	int sum=0;
	int product=1;
        while(n>0)
	{
		digit = n%10;
		sum += digit;
		product *= digit;
		n != 10;
	}
}
int main()
{
	int x,add,mul;
	printf("enter a number:");
	scanf("%d",&x);
	if(x<=0)
	{
		printf("invalid input\n");
		return 1;
	}
	printf("enter a +ve integer:");
	scanf("%d",&x);

	if(x<=0)
	{
		printf("invalid input\n");
		return 1;
	}
	read(x, &add,&mul);
	printf("sum = %d\n",add);
	printf("product = %d\n",mul);
	return 0;
}
	
