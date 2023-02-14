#include <stdio.h>
int main()
{
	int i,j,a[5][5];
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			a[i][j] = 0;
		}
	}
	printf("\n\n\n");
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	a[5][2] = 1;
	printf("\n\n\n");
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	} 
	return 0;
}