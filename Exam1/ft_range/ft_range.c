#include <stdio.h>
#include <stdlib.h>

int absolut(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int     *ft_range(int start, int end)
{
	int *a;
	int i = 0;
	a = (int *)malloc(sizeof(int) * (absolut(end - start)) + 1);
	if (!a)
		return (NULL);
	while (start < end)
		{
			a[i]= start;
			start++;
			i++;
		}
	while (start > end)
		{
			a[i] = start;
			start--;
			i++;
		}
	a[i] = start;
	return (a);	
}
int main()
{
	int i = 0;
	int *a = ft_range(0,-3);
	while (i<4)
	{
		printf("%d\n", a[i]);
		i++;
	}
}
