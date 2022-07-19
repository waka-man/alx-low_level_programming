#include "main.h"
#include <stdlib.h>

void print_diagsums(int *a, int size)
{
	int index;
	int row = 0;
	int column = size - 1;
	int row_sum = 0;
	int column_sum = 0;

	for (index = 0; index < size; index++)
	{
		row_sum = *(a + index * size + row) + row_sum;
		column_sum = *(a + index * size + column) + column_sum;

		row++;
		column--;
	}
	printf("%d, %d\n", row_sum, column_sum);
}
