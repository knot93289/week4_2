#include<stdio.h>
int main()
{
	int a, b, c, d, num;
	printf("Please enter number (not more than 9999) : ");
	scanf_s("%d",&num);
	if (num > 9999)
		printf("Your number more than 9999\n");
	else
	{
		a = num / 1000;
		b = (num % 1000) / 100;
		c = (num % 100) / 10;
		d = num % 10;
		printf("Inverse number is : %d%d%d%d",d,c,b,a);
	}
	return 0;
}