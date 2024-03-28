//using while loop 
#include<stdio.h>
int main()
{
	int it=1;
	while(1){
		printf("%d\n",it);
		it++;
		if(it>10)
		{
			break;
		}
	}
	return 0;
}