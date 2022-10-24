#include <stdio.h>
#include <stdlib.h>
int absolut(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int     *ft_rrange(int start, int end)
{
	int *a = (int *)malloc(sizeof(int) * (absolut(end-start)+1));
	int i = 0;
	if (!a)
		return (NULL);
	while (start < end)
	{
		a[i] = end;
		end--;
		i++;
	}
	while (start > end)
	{
		a[i] = end;
		end++;
		i++;
	}
	a[i] = end;
	return (a);
}
int main()
{
	int i = 0;
	int *a = ft_rrange(0,-3);
	while (i<4)
	{
		printf("%d\n", a[i]);
		i++;
	}
}
