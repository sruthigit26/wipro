#include<stdio.h>
int main()
{
	int n=5;
	int count=0;
	int i=1,j=1,k=1,l=1;
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			for(k=1;k<n;k++)
			{
				for(l=1;l<n;l++)
                        	{
				        if((i+j+k+l)==n)
					{
	                        //	printf("\n%d+%d+%d+%d=%d",i,j,k,l,n);
				        count++;	
					}
				}
			}
		}
	}
	printf("\nNo of ways: %d",count);
	printf("\n\n");
	return 0;
}
