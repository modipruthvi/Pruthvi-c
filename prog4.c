#include<stdio.h>

int swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 2;
	int b = 9;
	
	swap(&a,&b);
	
	printf("\nSwap a value is : %d",a);
	printf("\nSwap b value is : %d",b);
	
	return 0;
}
