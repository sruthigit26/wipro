/* write the logic to for incrementing squared number-star pattern
 * input format: take N as input of type integer
 * output format:printing incrementing squared number star pattern
 *
 * constrains:  2<=N<=10
 * sample input: 5
 * sample output:
 * 1*2*3*4*5
 * 6*7*8*9*10
 * 11*12*13*14*15
 *16*17*18*19*20
 21*22*23*24*25
 */
#include<stdio.h>
int main()
{
	int n;
	int count=1;
	printf("\n enter the numbre:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<i)
			{
				printf("%d*",count);
				count++;
			}
			else 
			{
				printf("%d",i*i);
				if(i<n)
				  printf("* ");
			
			     
			}
		}
		printf("\n");
	}
	return 0;
}
