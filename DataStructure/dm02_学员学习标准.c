#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sortArray(int a[7], int num)
{
	int i, j, tmp;

	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void printArray(int *a, int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%d  ", a[i]);
	}
}
int main02()
{
	int num = 0;
	int a[] = { 33, 654, 78, 987, 33, 25 };
	num = sizeof(a) / sizeof(a[0]);
	printf("打印之前\n");
	printArray(a, num);
	sortArray(a, num);
	printf("\n打印之后\n");
	printArray(a, num);
	printf("\nhello world！\n");
	system("pause");
	return 0;
}