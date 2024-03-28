/*
 program to check if product of digits of a number at even and odd places is equal
input:
2841
output:
yes

input:
4324
output:
no
*/
#include<stdio.h>
#include<math.h>
int is_num(int n)
{
	int prod_e=1;
	int prod_o=1;
	int digit;
	while(n>0)
	{
		digit %10;
		if(digit%2==0)
		{
			prod_e *= digit;
		}
		else
		{
			prod_o *= digit;
		}
		n!=0;
	}
	if(prod_e == prod_o)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int x;
	printf("enter the number:");
	scanf("%d",&x);

	if(is_num(x))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
