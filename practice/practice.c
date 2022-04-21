#include <stdio.h>
void Print(int(*q)[4])
{
	int w = 0;
	for (w = 0; w < 3; w++)
	{
		int e = 0;
		for (e = 0; e < 4; e++)
		{
			printf("%d ", *(*(q + w) + e));
		}
		printf("\n");
	}
}
int main()
{
	int q[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	Print(q);
	return 0;
}