#include<stdio.h>
#include<conio.h>

void main(void)
{
	int num, x, answer;
	printf("\n Enter a number to print its Collatz series:\n\n ");
	scanf_s(" %d", &num);
	printf("\n\n The Collatz series of %d is:\n\n %d\n\n", num, num);
	answer = collatz(num);
}
int collatz(x)
{
	if (x == 1)
	{
		printf(" 1 \n");
		_getch();

	}
	else if (x % 2 == 0)
	{
		x = x / 2;
		printf(" %d \n\n", x);
		return collatz(x);
	}
	else
	{
		x = 3 * x + 1;
		printf(" %d\n\n", x);
		return collatz(x);
	}

}