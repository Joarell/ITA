#include <stdio.h>

static void i_sort(int *array)
{
	int	j;
	int	i;
	int	key;

	i = 0;
	j = 1;
	while (array[j] != '\0')
	{
		key = array[j];
		i = j - 1;
		while (i >= 0 && array[i] > key)
		{
			array[i + 1] = array[i];
			i--;
		}
		array[i + 1] = key;
		j++;
	}
}

int main(void)
{
	int list[10] = {13, 44, 55, 1, 5, 2, 3, 8, 6};
	int val;

	val = 0;
	printf("This is a original array: ");
	while (list[val] != '\0')
	{
		printf("%d " , list[val]);
		val++;
	}
	printf("\n");

	printf("This is a sorted array: ");
	i_sort(list);
	val = 0;
	while (list[val] != '\0')
	{
		printf("%d " , list[val]);
		val++;
	}
	printf("\n");
	return (0);
}
