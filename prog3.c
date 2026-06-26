#include<stdio.h>

int main()
{
	int i;
	
	printf("Enter start value: ");
	scanf("%d",&i);
	
		if((i%4 == 0 && i%100 != 0)||i%400 ==0)
		{
		 	printf("This year is leap : %d ",i);
		}
		else{
			printf("This year is not leap .");
		}
	return 0;
}
