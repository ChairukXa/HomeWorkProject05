#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, gcd;
	printf("Input First Number : ");
	scanf("%d", &a);
	printf("Input Second Number : ");
	scanf("%d", &b);
	while (b != 0)
	{
		int x = b;
		b = a % b;
		a = x;
	}
	gcd = a;
	printf("\nThe greatest common divisor is %d\n", gcd);
	return 0;
}