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
#include<math.h>

int is_divisible(int n)
{
		int digit;
		int sum_o=0;
		int product_e=1;
		for(n=1;n>0;n!=10)
		{
			digit=n%10;
			if(digit%2==0)
			{
				product_e *= digit;
			}
			else
			{
				sum_o += digit;
			}
		}
		if(product_e%sum_o ==0)
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
	printf("enter a number:");
	scanf("%d",&x);
        
        if(is_divisible(x))
	{
		printf("\nTRUE\n");
	}
	else
	{
		printf("\nTRUE\n");
	}
	return 0;
}

