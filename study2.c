#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 6

void insertion(int *parr, int n);

int main(void)
{
	srand(time(NULL));

	int arr[MAX_SIZE] = { 10, 30, 40, 50, 70, 80 };


	for (int i = 0; i < MAX_SIZE; i++)
	{
		arr[i] = rand() % 30 + 1;
	}

	for (int i = 0; i < MAX_SIZE; i++)
	{
		printf(" %d ", arr[i]);
	}

	printf("\n");

	insertion(arr, MAX_SIZE);

	for (int i = 0; i < MAX_SIZE; i++)
	{
		printf(" %d ", arr[i]);
	}



	system("PAUSE");
	return 0;
}


void insertion(int *parr, int n)
{

	/*

	for(int i=0;i<n-1;i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (parr[j - 1] > parr[j])//뼈속까지 비교해준다,
			{
				int cup;
				cup = parr[j];
				parr[j] = parr[j - 1];
				parr[j - 1] = cup;
			}
		}



	}

	*/

	/*
	int i, j, sm;

	for (i = 0; i < n; i++)
	{
		sm = i;

		for (j = i + 1; j < n; j++)
		{
			if (parr[j] < parr[sm])
				sm = j;
		}

		int cup;

		cup = parr[sm];
		parr[sm] = parr[i];
		parr[i] = cup;

	}
	*/


	/*
	int i, j, temp;

	for (i = 1; i < n; i++)
	{
		temp = parr[i];
		j = i - 1;

		while (j >= 0 && parr[j] > temp )
		{
			parr[j + 1] = parr[j];
			j = j - 1;

		}

		parr[j + 1] = temp;

	}
	*/

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > 0; j--)
		{


		}
	}

	return;
}
