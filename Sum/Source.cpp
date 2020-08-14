#include <stdio.h>
int main()
{
	int x, y;
	scanf_s("%d %d", &x, &y);
	int Sum = 0;
	for (int i = x; i <= y; i++)
	{
		Sum += i;
	}
	printf("%d", Sum);
	return 0;
}